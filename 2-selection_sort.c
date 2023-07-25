#include "sort.h"

/**
 * swap - switches two elements of an array
 * @array: double pointer to array
 * @first: index to element in array
 * @second: index to element in array
 *
 * Return: nothing
 */
void swap(int **array, size_t first, size_t second)
{
	int tmp;

	tmp = (*array)[first];
	(*array)[first] = (*array)[second];
	(*array)[second] = tmp;
}

/**
 * selection_sort - sorts an array using selection sort
 * @array: array to be sorted
 * @size: size of array
 *
 * Return: nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int min_value, min_ind, swapp;

	if (size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		min_value = array[i];
		min_ind = i;
		swapp = 0;
		for (j = i + 1; j < size; j++)
		{
			if (min_value > array[j])
			{
				min_value = array[j];
				min_ind = j;
				swapp = 1;
			}

		}
		if (swapp)
		{
			swap(&array, i, min_ind);
			print_array(array, size);
		}
	}
}
