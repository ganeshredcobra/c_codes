#include <stdio.h>
#include <stdlib.h>

/* Rading int values shifting its arrays and taking average */

#define ARR_SIZE_1 10
#define ARR_SIZE_2 5
 
//int array[4] = { 1, 2, 3, 4 };
int array[ARR_SIZE_1] = {0};
float array2[ARR_SIZE_2] = {0.0000001}; 
//float array2[ARR_SIZE_2] = { 0.0000001, 0.0000001, 0.0000001, 0.0000001 ,0.0000001};
int temp_var;
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

float getAverage(int arr[], int size) {

   int i;
   float avg = 0;
   int sum = 0;

   for (i = 0; i < size; ++i) {
      sum += arr[i];	 
   }  
   avg = sum / (float)(size);

   return avg;
}

void Shift_Array(int darray[], int SIZE, int New_Input)
{
   int i;
   for (i = (SIZE-1); i > 0; --i)
   {
		darray[i] = darray[i-1];
   }
   darray[i] = New_Input;
   darray[SIZE] = '\0';
}

void Shift_Array2(float darray2[], int SIZE, float New_Avg)
{
   int i;
   for (i = (SIZE-1); i > 0; --i)
   {		 
		darray2[i] = darray2[i-1];	
   }
   darray2[i] = New_Avg;
   //darray2[SIZE] = '\0';
}

void Print_Array(int darray[], int size)
{
	int i;
	for (i = 0; i < size; ++i)
	{
		printf("The Value of array is %d  %d\n",i,array[i]);
	}
}

void Print_Array2(float darray[], int size)
{
	int i;
	for (i = 0; i < size; ++i)
	{
			printf("The Value of array2 is %d  %f\n",i,darray[i]);
	}
}

int main() 
{    
	float Avg;
   
	Print_Array(array,ARR_SIZE_1);
	Avg = getAverage(array,ARR_SIZE_1);
	
	printf("Average is %f\n",Avg);
	printf("-------------------------------\n");
	//Shift_Array2(array2,ARR_SIZE_2,Avg);
	Print_Array2(array2,ARR_SIZE_2);
	printf("Enter New Value\n");
	scanf("%d",&temp_var);
	while(temp_var!= EOF)
	{
		Shift_Array(array,ARR_SIZE_1,temp_var);
		Print_Array(array,ARR_SIZE_1);
		Avg = getAverage(array,ARR_SIZE_1);
		printf("-------------------------------\n");
		Shift_Array2(array2,ARR_SIZE_2,Avg);
		Print_Array2(array2,ARR_SIZE_2);
		//arraylen(array);
		printf("Average is %f\n",Avg);
		printf("Enter New Value\n");
		scanf("%d",&temp_var);
	
	}
	
}


