#include "sort.h"

void swap(int *a, int *b);

/**
 * quick_sort - implements a quick sort algorithm
 * @array: array to be sorted
 * @size: size of array
 *
 * Return: Nothing
 */

void quick_sort(int *array, size_t size)
{

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
