#include <stdio.h>
#include <stdlib.h>

/* Rading hex values shifting its arrays and taking average */

#define ARR_SIZE_1 10
#define ARR_SIZE_2 5
 
//uint16_t array[ARR_SIZE_1] = { 0xA, 0xB, 0xC, 0xD, 0xF, 9, 7, 6, 5, 4};
//uint16_t array[ARR_SIZE_1] = {0x0};
//uint16_t array2[ARR_SIZE_2] = {0x0};
//float array2[ARR_SIZE_2] = { 0.0000001, 0.0000001, 0.0000001, 0.0000001 ,0.0000001};

uint16_t temp_var;
int Count = 0;
int TotLen = 0;

int arraylen(int arr[])
{
	int i;
	for(i=0; arr[i]!='\0'; i++)
	{
		Count++;
	}
	printf("Length is %d\n",Count);
	return Count;
}

uint16_t getAverage(uint16_t arr[], int size) {

   int i;
   uint16_t avg = 0;
   uint16_t sum = 0;

   for (i = 0; i < size; ++i) {
      sum += arr[i];	 
   }  
   avg = (sum * 10) / (size);

   return avg;
}

void Shift_Array(uint16_t darray[], int SIZE, uint16_t New_Input)
{
   int i;
   for (i = (SIZE-1); i > 0; --i)
   {
		darray[i] = darray[i-1];
   }
   darray[i] = New_Input;
   darray[SIZE] = '\0';
}

void Shift_Array2(uint16_t darray2[], int SIZE, uint16_t New_Avg)
{
   int i;
   for (i = (SIZE-1); i > 0; --i)
   {		 
		darray2[i] = darray2[i-1];	
   }
   darray2[i] = New_Avg;
   //darray2[SIZE] = '\0';
}

void Print_Array(uint16_t darray[], int size)
{
	int i;
	for (i = 0; i < size; ++i)
	{
		printf("The Value of array is %d  %X\n",i,darray[i]);
	}
}

void Print_Array2(uint16_t darray[], int size)
{
	int i;
	for (i = 0; i < size; ++i)
	{
			printf("The Value of array2 is %d  %X\n",i,darray[i]);
	}
}

int main() 
{   
	uint16_t array[ARR_SIZE_1] = {0x0};
	uint16_t array2[ARR_SIZE_2] = {0x0}; 	
	uint16_t Avg;
	
	Print_Array(array,ARR_SIZE_1);
	Avg = getAverage(array,ARR_SIZE_1);
	printf("Average is %X\n",Avg);
	//printf("-------------------------------\n");
	//Shift_Array2(array2,ARR_SIZE_2,Avg);
	//Print_Array2(array2,ARR_SIZE_2);
	//printf("Enter New Value\n");
	scanf("%x",&temp_var);
	while(temp_var!= EOF)
	{
		Shift_Array(array,ARR_SIZE_1,temp_var);
		Print_Array(array,ARR_SIZE_1);
		Avg = getAverage(array,ARR_SIZE_1);
		printf("-------------------------------\n");
		Shift_Array(array2,ARR_SIZE_2,Avg);
		Print_Array(array2,ARR_SIZE_2);
		printf("Average is %X\n",Avg);
		printf("Enter New Value\n");
		scanf("%x",&temp_var);	
	}
	
}


