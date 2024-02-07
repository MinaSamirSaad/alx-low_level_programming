#include"search_algos.h"
#include <math.h>
/**
 * jump_search - function to do jump search
 * @array: pointer to array of integers
 * @size: size of array
 * @value: value to search for
 * Return: index of element or -1 if not found
 */

int jump_search(int *array, size_t size, int value)
{
size_t prev = 0;
size_t step = sqrt(size);
size_t i;

if (array == NULL)
return (-1);
while (prev < size && array[prev] < value)
{
printf("Value checked array[%lu] = [%i]\n", prev, array[prev]);
prev += step;
}
printf("Value found between indexes [%lu] and [%lu]\n", prev - step, prev);
for (i = prev - step; i <= prev; i++)
{
if (i < size)
{
printf("Value checked array[%lu] = [%i]\n", i, array[i]);
if (array[i] == value)
return (i);
}
}
return (-1);
}
