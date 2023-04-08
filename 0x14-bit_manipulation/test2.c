#include "main.h"
#include <stdio.h>
#include <string.h>

unsigned int binary_to_uint(const char *binary)
{
    unsigned int result = 0;
    size_t length = strlen(binary);
    size_t i;

    for ( i = 0; i < length; i++) {
        if (binary[i] == '1') {
            result += 1 << (length - i - 1);
        } else if (binary[i] != '0') {
            return 0;
        }
    }
    
    return result;
}
