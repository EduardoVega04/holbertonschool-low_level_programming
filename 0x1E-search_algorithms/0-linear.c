#include "search_algos.h"
/**
 * linear_search - Linear search method for arrays
 * @array: Pointer to the first element of the array
 * @size: The size of the array
 * @value: The value to search for
 * Return: The index of given number, -1 otherwise
 */
int linear_search(int *array, size_t size, int value)
{
  size_t pos;

  if (array == NULL)
    return (-1);

  for (pos = 0; pos < size; pos++)
  {
    printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

    if (array[pos] == value)
      return (pos);
  }

  return (-1);
}
