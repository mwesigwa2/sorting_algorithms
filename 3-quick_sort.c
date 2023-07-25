#include "sort.h"

void swap(int **array, size_t a, size_t b);
void quick_sort_recursor(int **array, size_t size, size_t low, size_t high);
int quick_sort_partition(int **array, size_t size, size_t low, size_t high);

/**
 * quick_sort - implements a quick sort algorithm
 * @array: array to be sorted
 * @size: size of array
 *
 * Return: Nothing
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
	{
		return;
	}

	quick_sort_recursor(&array, size, 0, size - 1);
}

/**
 * swap - Swaps two integers, a and b
 * @array: Array containing integers to swap
 * @a: Inetegr to swap
 * @b: Second integer to sort
 *
 * Return: No return value
 */

void swap(int **array, size_t a, size_t b)
{
	int temp;

	temp = (*array)[a];
	(*array)[a] = (*array)[b];
	(*array)[b] = temp;
}

/**
 * quick_sort_recursor - Repeatetively calls the partion function
 * @array: An array to sort
 * @size: The length of the array
 * @low: The lower index of the array
 * @high: The higher array index
 *
 * Return: No return value
 */

void quick_sort_recursor(int **array, size_t size, size_t low, size_t high)
{
	size_t x;

	if (low < high && *array)
	{
		x = quick_sort_partition(array, size, low, high);

		if ((x - low) > 1)
		{
			quick_sort_recursor(array, size, low, x - 1);
		}
		if ((high - x) > 1)
		{
			quick_sort_recursor(array, size, x + 1, high);
		}
	}
}

/**
 * quick_sort_partition - Repeatetively calls the partion function
 * @array: An array to sort
 * @size: The length of the array
 * @low: The lower index of the array
 * @high: The higher array index
 *
 * Return: The index of th pivot
 */

int quick_sort_partition(int **array, size_t size, size_t low, size_t high)
{
	size_t pivot = high;
	size_t j;
	size_t i = low;

	for (j = low; j < high; j++)
	{
		if ((*array)[j] <= (*array)[pivot])
		{
			if (i != j)
			{
				swap(array, i, j);
				print_array(*array, size);
			}
			i++;
		}
	}

	if (i != j)
	{
		swap(array, i, j);
		print_array(*array, size);
	}
	return (i);
}
