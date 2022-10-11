#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort - entry point
 * @array: name of array
 * @size: length of array
 * Return: sorted list
 */

void bubble_sort(int *array, size_t size)
{

	int i, j, temp, flag;

	for (i = 0; i < size - 1; i++)
	{
		flag = 0;

		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
				flag = 1;
			}
		}
		if (flag == 0)
		{
			break;
		}
	}
}
