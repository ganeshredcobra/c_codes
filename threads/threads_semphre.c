/*
 * =====================================================================================
 *
 *       Filename:  threads.c
 *
 *    Description:  Threads with semaphore
 *
 *        Version:  1.0
 *        Created:  Thursday 30 May 2013 12:56:40  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ganesh H (gh), ganeshredcobra@gmail.com
 *        Company:  space-kerala.org
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <semaphore.h>


char n[1024];
sem_t len;

void *read(){

	while(1){
		
		printf("Enter a string :");
		scanf("%s",n);
		sem_post(&len);

		}
}
void *write(){

	while(1){
		sleep(5);
		sem_wait(&len);
		printf("The string entered is :");
		printf("===%s\n",n);

		}
}
int main(){

	pthread_t tr,tw;
	pthread_create(&tr,NULL,read,NULL);
	pthread_create(&tw,NULL,write,NULL);
	pthread_join(tr,NULL);
	pthread_join(tw,NULL);
	return 0;
}
