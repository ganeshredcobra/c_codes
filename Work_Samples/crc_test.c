#include <stdio.h>
#include <stdlib.h>

uint16_t  AVG_Current = 0x1FF;

unsigned checksum_array(void *buffer, int len, unsigned int seed)
{
	  unsigned short Cheksum;
	  unsigned char temp;
      unsigned char *buf = (unsigned char *)buffer;
      int i;

      for (i = 0; i < len; ++i)
            seed += (unsigned int)(*buf++);
	  printf("The seed value is %d %X\n",seed,seed);
	  Cheksum = (char)~(seed);
	  printf("The Inverted seed value is %d %X\n",Cheksum,Cheksum);
	  temp = ~(Cheksum);
	  printf("The InvInverted %d %X\n",temp,temp);
      return seed;
}

unsigned int checksum_int(uint16_t Msg,  unsigned int seed)
{
	int c;
	while (Msg != 0)
    {
		seed += (Msg&0xF); 
		Msg = (Msg>>4);
		c++;
    }
   printf("seed is %d \n",seed);
   return seed;
	
}
 
int main()
{
   int i, CRCsum;
   uint16_t temp_var;
  // create a message array that has one extra byte to hold the CRC:
  unsigned char message[3] = {0x83, 0x01, 0x00};
  checksum_array(message, 3, 0);
  //printf("string %s\n", string);
  printf("AVG_Current pre is %X \n",AVG_Current);
  CRCsum = checksum_int(AVG_Current,0);
  printf("CRCsum is %d \n",CRCsum);
 
}
