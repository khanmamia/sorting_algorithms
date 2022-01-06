#include "sort.h"

/**
  * bubble_sort - sorts an array using bubble sort algorithm
  * @array: the array to be sorted
  * @size: size of array
  * Return: nothing
  */
void bubble_sort(int *array, size_t size)
{
	size_t i, size_h;
	int current, next, swap;

	if (array == NULL || size == 0)
		return;

	size_h = size;
	swap = 0;
	i = 0;
	while (i < size - 1)
	{
		current = array[i];
		next = array[i + 1];
		if (array[i] > array[i + 1])
		{
			array[i] = next;
			array[i + 1] = current;
			swap = 1;
			print_array(array, size_h);
		}

		if (++i == size - 1 && swap == 1)
		{
			i = 0;
			swap = 0;
			--size;
		}
	}
}
