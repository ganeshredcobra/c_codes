#include <stdio.h>
#include <stdlib.h>
#include <alsa/asoundlib.h>
	      
main (int argc, char *argv[])
{
  int i;
  int err;
  int buf[128];
  snd_pcm_t *playback_handle;
  snd_pcm_hw_params_t *hw_params;
  FILE *fin;
  size_t nread;
  unsigned int rate = 44100;	

  if (argc != 3) {
    fprintf(stderr, "Usage: %s card file\n", argv[0]);
    exit(1);
  }

  if ((err = snd_pcm_open (&playback_handle, argv[1], SND_PCM_STREAM_PLAYBACK, 0)) < 0) {
    fprintf (stderr, "cannot open audio device %s (%s)\n", 
	     argv[1],
	     snd_strerror (err));
    exit (1);
  }

  if ((err = snd_pcm_hw_params_malloc (&hw_params)) < 0) {
    fprintf (stderr, "cannot allocate hardware parameter structure (%s)\n",
	     snd_strerror (err));
    exit (1);
  }
 
  if ((err = snd_pcm_hw_params_any (playback_handle, hw_params)) < 0) {
    fprintf (stderr, "cannot initialize hardware parameter structure (%s)\n",
	     snd_strerror (err));
    exit (1);
  }

  if ((err = snd_pcm_hw_params_set_access (playback_handle, hw_params, SND_PCM_ACCESS_RW_INTERLEAVED)) < 0) {
    fprintf (stderr, "cannot set access type (%s)\n",
	     snd_strerror (err));
    exit (1);
  }
  
  if ((err = snd_pcm_hw_params_set_format (playback_handle, hw_params, SND_PCM_FORMAT_S16_LE)) < 0) {
    fprintf (stderr, "cannot set sample format (%s)\n",
	     snd_strerror (err));
    exit (1);
  }


  if ((err = snd_pcm_hw_params_set_rate_near (playback_handle, hw_params, &rate, 0)) < 0) {
    fprintf (stderr, "cannot set sample rate (%s)\n",
	     snd_strerror (err));
    exit (1);
  }
  printf("Rate set to %d\n", rate);
	
  if ((err = snd_pcm_hw_params_set_channels (playback_handle, hw_params, 2)) < 0) {
    fprintf (stderr, "cannot set channel count (%s)\n",
	     snd_strerror (err));
    exit (1);
  }
	
  if ((err = snd_pcm_hw_params (playback_handle, hw_params)) < 0) {
    fprintf (stderr, "cannot set parameters (%s)\n",
	     snd_strerror (err));
    exit (1);
  }
	
  snd_pcm_hw_params_free (hw_params);
  
  if ((fin = fopen(argv[2], "r")) == NULL) {
      fprintf(stderr, "Can't open %s for reading\n", argv[2]);
      exit(1);
  }
  int size=sizeof(int);
  while(1)
  {
	nread = fread(buf, size, 128, fin);
	  
	  if (nread == 0) {
	      fprintf(stderr, "end of file on input\n");
	      break;
	    } else if (nread != size) {
	      fprintf(stderr,
		      "short read: read %d bytes\n", nread);
	    }
	    nread = snd_pcm_writei(playback_handle, buf, nread);
	    if (nread == -EPIPE) {
	      /* EPIPE means underrun */
	      fprintf(stderr, "underrun occurred\n");
	      snd_pcm_prepare(playback_handle);
	    } else if (nread < 0) {
	      fprintf(stderr,
		      "error from writei: %s\n",
		      snd_strerror(nread));
	    }  else if (nread != (int)rate) {
	      fprintf(stderr,
		      "short write, write %d frames\n", nread);
	    }
  }
 
  snd_pcm_drain(playback_handle);	
  snd_pcm_close (playback_handle); 

}
