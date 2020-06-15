#include <stdio.h>
#include <stdlib.h>
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

	for (i = 0; i < size - 1; i++)
		for (j = 0; j < size - i - 1; j++)
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
}

/**
 *swap - swap function
 * @a: int
 * @b: int
 * return: void
 */
void swap(int *a, int *b)
{
	int permut;

	permut = *a;
	*a = *b;
        *b = permut;
}
