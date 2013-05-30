/*
 * =====================================================================================
 *
 *       Filename:  threads.c
 *
 *    Description:  Threads
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

void *thread1(){

	while(1){
		
		printf("thread1!!\n");

		}
}
void *thread2(){

	while(1){
		
		printf("thread2!!\n");

		}
}
int main(){

	int status;
	pthread_t tid1,tid2;
	
	pthread_create(&tid1,NULL,thread1,NULL);
	pthread_create(&tid2,NULL,thread2,NULL);
	pthread_join(tid1,NULL);
	pthread_join(tid2,NULL);
	return 0;
}
