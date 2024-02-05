#include "search_algos.h"
#include <math.h>

int jump_search(int *array, size_t size, int value) {
    if (array == NULL) {
        return -1;  // Handle case where the array is NULL
    }

    int blockSize = (int)sqrt(size);
    int step = blockSize;
    int prev = 0;

    while (array[step - 1] < value && step < size) {
        printf("Value checked array[%d] = [%d]\n", step - 1, array[step - 1]);
        prev = step;
        step += blockSize;
    }

    printf("Value found between indexes [%d] and [%d]\n", prev, step - 1);

    for (int i = prev; i < step && i < size; ++i) {
        printf("Value checked array[%d] = [%d]\n", i, array[i]);
        if (array[i] == value) {
            printf("Found %d at index: %d\n", value, i);
            return i;
        }
    }

    printf("Value checked array[%d] = [%d]\n", step - 1, array[step - 1]);
    printf("Found %d at index: -1\n", value);

    return -1;  // Value not found
}
