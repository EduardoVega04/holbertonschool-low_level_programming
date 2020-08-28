#include "search_algos.h"
/**
 * my_edwardPrint - Prints an array. By EduardoVega04
 * @array: Pointer to first element of the array
 * @start: Start point to print
 * @end: End point to print
 * Return: Nothing, I'm your papi
 */
void my_edwardPrint(int *array, int start, int end)
{
int i;

printf("Searching in array: ");

for (i = start; i <= end; i++)
{
printf("%d", array[i]);

if (i < end)
{
printf(", ");
}

}
printf("\n");
}

/**
 * binary_search - Search for a value in a sorted array
 * @array: Pointer to the first element of the array
 * @size: Size of the array
 * @value: Value to search for
 * Return: The index of the value, othervise return -1
 */
int binary_search(int *array, size_t size, int value)
{
size_t start = 0;
size_t end = size - 1;
size_t middle;

if (array == NULL)
{
return (-1);
}

while (start <= end)
{
my_edwardPrint(array, start, end);

middle = (start + end) / 2;

if (array[middle] == value)
{
return (middle);
}

else if (value < array[middle])
{
end = middle - 1;
}

else
{
start = middle + 1;
}

}

return (-1);
}
