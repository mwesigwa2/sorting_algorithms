#include "sort.h"

/**
 * bubble_sort - implements bubble sort algorithm
 * @array: array to be sorted
 * @size: size of array
 *
 * Return: Nothing
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp, swapp;

	for (i = 0; i < size - 1; i++)
	{
		swapp = 0;

		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
				swapp = 1;
			}
		}
		if (swapp == 0)
		{
			break;
		}
	}
}
