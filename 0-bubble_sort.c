#include <stdio.h>
#include "sort.h"

/**
 * bubble_sort
 * @array: the array of int to sort
 * @size: length of the array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int permut, swapped = 0;

	if (size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;
		for (j = 0; j < size - i - 1; j++)
			if (array[j] > array[j + 1])
			{
				permut = array[j];
				array[j] = array[j + 1];
				array[j + 1] = permut;
				print_array(array, size);
				swapped = 1;
			}
		if (swapped == 0)
			break;
	}
}
