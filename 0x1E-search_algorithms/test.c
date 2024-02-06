#include <stdio.h>
#include <stddef.h>

int interpolation_search(int *array, size_t size, int value)
{
    size_t low, high, pos;
    low = 0;
    high = size - 1;

    if (array == NULL || size == 0)
        return -1;

    while (low <= high)
    {
        pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

        printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

        if (pos >= size || pos < low)
        {
            printf("Value checked array[%ld] is out of range\n", pos);
            return -1; // Target not found
        }

        if (array[pos] == value)
            return (int)pos;
        else
        {
            if (array[pos] < value)
                low = pos + 1;
            else
                high = pos - 1;
        }
    }

    return -1; // Target not found
}

