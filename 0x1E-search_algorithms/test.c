#include "search_algos.h"
#include <stdio.h>
/**
 * advanced_binary_recursive - recursive helper function for advanced binary search
 * @array: pointer to the first element of the array
 * @start: starting index of the subarray
 * @end: ending index of the subarray
 * @value: value to search for
 * Return: the index where value is located, otherwise -1
 */
int advanced_binary_recursive(int *array, size_t start, size_t end, int value)
{
    size_t mid, i;

    if (start > end)
        return -1;

    printf("Searching in array: ");
    for (i = start; i <= end; i++)
    {
        printf("%d", array[i]);
        if (i < end)
            printf(", ");
        else
            printf("\n");
    }

    mid = start + (end - start) / 2;

    if (array[mid] == value)
    {
        if (mid > start && array[mid - 1] == value)
            return advanced_binary_recursive(array, start, mid, value);
        return mid;
    }

    if (array[mid] < value)
        return advanced_binary_recursive(array, mid + 1, end, value);
    return advanced_binary_recursive(array, start, mid - 1, value);
}
/**
 * advanced_binary - searches for a value in a sorted array using advanced binary search
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 * Return: the index where value is located, otherwise -1
 */
int advanced_binary(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
        return -1;

    return advanced_binary_recursive(array, 0, size - 1, value);
}


