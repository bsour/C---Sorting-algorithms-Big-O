#include "sort.h"
/**
 * swap_int - swaps integer
 * @a: first int
 * @b: second int
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * selection_sort - sort from lowest to highest int
 * @array: array to sort
 * @size: size of array
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	size_t j_min;

	if (size < 2 || array == NULL)
	{
		return;
	}
	i = 0;
	j = 0;
	while (i < size - 1)
	{
		j_min = i;
		j = i + 1;
		while (j < size)
		{
			if (array[j] < array[j_min])
			{
				j_min = j;
			}
			j = j + 1;
		}
		if (j_min != i)
		{
			swap_int(&array[i], &array[j_min]);
			print_array(array, size);
		}
		i = i + 1;
	}
}
