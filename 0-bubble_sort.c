#include "sort.h"

/**
*bubble_sort - function that sorts number in array
*
*@array : the array of int to be sorted
*
*@size: the size of the array to be sorted
**/

void bubble_sort(int *array, size_t size)
{
size_t i, j;
int swipe;

for (i = 0; i < size - 1; i++)
{
	for (j = 0; j < size - i - 1; j++)
	{
		if (array[j] > array[j + 1])
		{
			swipe = array[j + 1];
			array[j + 1] = array[j];
			array[j] = swipe;
			print_array(array, size);
		}
	}
}

}
