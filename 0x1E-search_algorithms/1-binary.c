#include "search_algos.h"
/**
 * binary_search - function to do binary search
 * @array: pointer to array of integers
 * @size: size of array
 * @value: value to search for
 * Return: index of element or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
size_t start = 0;
size_t end = size - 1;
size_t mid;
size_t i;

if (array == NULL)
return (-1);
while (start <= end)
{
printf("Searching in array: ");
for (i = start; i < end; i++)
printf("%d, ", array[i]);
printf("%d\n", array[i]);
mid = (start + end) / 2;
if (array[mid] < value)
start = mid + 1;
else if (array[mid] > value)
end = mid - 1;
else
return (mid);
}
return (-1);
}
