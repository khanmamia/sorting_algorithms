#include "sort.h"

/**
  * selection_sort - sorts an array using selection sort
  * @array: array to be sorted
  * @size: size of array
  * Return: nothing
  */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int selection;

	if (array == NULL || size <= 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		selection = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (selection > array[j])
			{
				array[i] = array[j];
				array[j] = selection;
				selection = array[i];
				print_array(array, size);
			}
		}
	}
}
