#include "sort.h"
/**
* swap - switches two elements of an array
* @ind1: index to element in array
* @ind2: index to element in array
* Return: nothing
*/
void swap(int *ind1, int *ind2)
{
	int tmp = *ind1;
	*ind1 = *ind2;
	*ind2 = tmp;
}


/**
* selection_sort - function that sorts an array of integers
* in ascending order using the selection sort algorithm
* @array: array to be sorted
* @size: the size of the array
* Return: nothing
*/

void selection_sort(int *array, size_t size)
{
	size_t i, j, min_id;

	for (i = 0; i < size - 1; i++)
	{
		/*find the minimum element in unsorted array*/
		min_id = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_id])
				min_id = j;

			if (min_id != i)
			{
				swap(&array[min_id], &array[i]);
				print_array(array, size);

			}
		}
	}
}
