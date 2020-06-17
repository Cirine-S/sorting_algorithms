#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * quick - function
 * @a: array
 * @low: low
 * @hight: high
 * @size: length of array
 * Return: void
 */
void quick(int a*, int low, int high, size_t size)
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
 * partition - function
 * @a: array
 * @low: 1st element
 * @high: last element
 * Return: index of swapped element
 */
int partition(int a*, int low, int high, size_t size)
{
	int i, j, swap, pivot = a[high];

	i = low - 1;

		for (j = low; j <= high- 1; j++)
		{
			if (a[j] < pivot)
			{
				i++;
				swap = a[i];
				a[i] = a[j];
				a[j] = swap;
				print_array(a, size);
			}
		}
	swap = a[i + 1];
	a[i + 1] = a[high];
	a[high] = swap;
	return (i + 1);
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
