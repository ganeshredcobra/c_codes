#include <stdio.h>

int FindMax(int Array[], int Size)
{
	int i,BigVal=0;
	for(i=0; i<(Size-1); i++)
	{
		if(Array[i] > Array[i+1])
		{
			BigVal = Array[i];
		}
		else
		{
			BigVal = Array[i+1];
		}
	}
	printf("The biggest Value is %d\n",BigVal);
}

void SwapElement(int Array[], int StartI, int SmallI)
{
    int temp = Array[StartI];
    Array[StartI] = Array[SmallI];
    Array[SmallI] = temp;
}

int main()
{
    const int size = 5;
	//int array[Size];
	int startIndex, currentIndex, smallestIndex = 0;
    int array[5] = { 30, 50, 20, 70, 40 };
	
	for (startIndex = 0; startIndex < size; ++startIndex)
	{
		printf("The Element on %d position is %d\n",startIndex,array[startIndex]);
	}
 
    // Step through each element of the array
    for (startIndex = 0; startIndex < size; ++startIndex)
    {
        // smallestIndex is the index of the smallest element we've encountered so far.
        smallestIndex = startIndex;
 
        // Look for smallest element remaining in the array (starting at startIndex+1)
        for (currentIndex = startIndex + 1; currentIndex < size; ++currentIndex)
        {
            // If the current element is smaller than our previously found smallest
            if (array[currentIndex] < array[smallestIndex])
                // This is the new smallest number for this iteration
                smallestIndex = currentIndex;
        }
        // Swap our start element with our smallest element
		SwapElement(array, startIndex, smallestIndex);
    }
	printf("----------------------\n");
	printf("Sorted Array is : \n");
	printf("----------------------\n");
	for (startIndex = 0; startIndex < size; ++startIndex)
	{
		printf("The Element on %d position is %d\n",startIndex,array[startIndex]);
	}
	printf("----------------------\n");
	FindMax(array,size);
	printf("----------------------\n");
    return 0;
}