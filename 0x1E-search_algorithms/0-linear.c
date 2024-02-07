#include "search_algos.h"
/**
 * linear_search - function to do linear search
 * @array: pointer to array of integers
 * @size: size of array
 * @value: value to search for
 * Return: index of element or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
size_t i;
for (i = 0; i < size; i++)
{
printf("Value checked array[%zu] = [%i]\n", i, array[i]);
if (array[i] == value)
return (i);
}
return (-1);
}
