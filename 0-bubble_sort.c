#include "sort.h"
/**
 * bubble_sort - sorts bubbly
 * @array: array to sort
 * @size: size
 *
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, newsize = size;
	int tmp, swap;

if (array == NULL || size < 2)
	return;

for (i = 0; i < newsize - 1; i++)
{
	swap = 0;

	for (j = 1; j < newsize - i; j++)
	{
	     if (array[j] < array[j - 1])
	{
			tmp = array[j - 1];
			array[j - 1] = array[j];
			array[j] = tmp;
			print_array(array, size);
			swap = 1;
		}
		}
		if (!swap)
			break;
	}
}
