#include <stdio.h>
#include <stdlib.h>
#include "sort.h"


/**
 * partition - function
 * @a: array
 * @low: 1st element
 * @high: last element
 * @size: size
 * Return: index of swapped element
 */
int partition(int *a, int low, int high, size_t size)
{
	int i, j, swap, pivot = a[high];

	i = low - 1;

	for (j = low; j < high; j++)
	{
		if (a[j] <= pivot)
		{
			i++;
			swap = a[i];
			a[i] = a[j];
			a[j] = swap;
			if (i != j)
			print_array(a, size);
		}
	}
	swap = a[i + 1];
	a[i + 1] = a[high];
	a[high] = swap;
	if (high != (i + 1))
		print_array(a, size);
	return (i + 1);
}

/**
 * quick - function
 * @a: array
 * @low: low
 * @high: high
 * @size: length of array
 * Return: void
 */
void quick(int *a, int low, int high, size_t size)
{
	int pi;

	if (low < high)
	{
		pi = partition(a, low, high, size);

		quick(a, low, pi - 1, size);
		quick(a, pi + 1, high, size);
	}
}

/**
 * quick_sort - function
 *@a: array
 *@size: size_t
 *Return: void
 */
void quick_sort(int *a, size_t size)
{
	quick(a, 0, size - 1, size);
}
