#include"search_algos.h"
/**
 * interpolation_search - function to do interpolation search
 * @array: pointer to array of integers
 * @size: size of array
 * @value: value to search for
 * Return: index of element or -1 if not found
 */

int interpolation_search(int *array, size_t size, int value)
{
size_t low = 0;
size_t high = size - 1;
size_t pos;

if (array == NULL)
return (-1);
while (low <= high)
{
pos = low + (((double)(high - low) / (array[high] - array[low]))
* (value - array[low]));
if (pos >= size)
{
printf("Value checked array[%lu] is out of range\n", pos);
return (-1);
}
printf("Value checked array[%lu] = [%i]\n", pos, array[pos]);
if (array[pos] == value)
return (pos);
else if (array[pos] < value)
low = pos + 1;
else
high = pos - 1;
}
return (-1);
}
