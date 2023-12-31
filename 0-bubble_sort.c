#include "sort.h"

void swap(int *a, int *b);
/**
 * bubble_sort - implements bubble sort algorithm
 * @array: array to be sorted
 * @size: size of array
 *
 * Return: Nothing
 */

void bubble_sort(int *array, size_t size)
{
	size_t j;
	int swapp = 1;

	if (array == NULL || size < 2)
	{
		return;
	}

	while (swapp)
	{
		swapp = 0;
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
				swapp = 1;
			}
		}
	}
}

/**
 * swap - Swaps two integers, a and b
 * @a: Integer to swap
 * @b: Second integer to sort
 *
 * Return: No return value
 */

void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
