#include "sort.h"

void swap(int *a, int *b);
void quick_sort_recursor(int *array, size_t size, int low, int high);
int quick_sort_partition(int *array, size_t size, int low, int high);

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

	quick_sort_recursor(array, size, 0, size - 1);
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

/**
 * quick_sort_recursor - Repeatetively calls the partion function
 * @array: An array to sort
 * @size: The length of the array
 * @low: The lower index of the array
 * @high: The higher array index
 *
 * Return: No return value
 */

void quick_sort_recursor(int *array, size_t size, int low, int high)
{
	if (low < high)
	{
		int pivot = quick_sort_partition(array, size, low, high);

		quick_sort_recursor(array, size, low, pivot - 1);
		quick_sort_recursor(array, size, pivot + 1, high);
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

int quick_sort_partition(int *array, size_t size, int low, int high)
{
	int pivot = array[high];
	int j;
	int i = low;

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			swap(&array[i], &array[j]);
			i++;
		}
	}
	swap(&array[i], &array[high]);
	print_array(array, size);
	return (i);
}
