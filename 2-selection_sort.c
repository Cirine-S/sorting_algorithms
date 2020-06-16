#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * selection_sort - function
 * @a: pointer to array
 * @size: length of the array
 * Return: void
 */
void selection_sort(int *a, size_t size)
{
	size_t i, j, minIndex, swap;

	for (i = 0; i < size; i++)
	{
		minIndex = i;
		for (j = i + 1; j < size; j++)
		{
			if (a[j] < a[minIndex])
				minIndex = j;
		}

		if (minIndex != i)
		{
			swap = a[i];
			a[i] = a[minIndex];
			a[minIndex] = swap;
			print_array(a, size);
		}
	}
}
