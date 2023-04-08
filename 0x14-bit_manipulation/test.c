#include "main.h"
#include <stddef.h>

unsigned int binary_to_uint(const char *b) {

    unsigned int i;
    unsigned int result = 0;
    
    if (b == NULL)
        return 0;
    for (i = 0; b[i] != '\0'; ++i) {
        if (b[i] == '0') {
            result <<= 1; 
        } else if (b[i] == '1') {
            result = (result << 1) | 1; 
        } else {
            return 0;
        }
    }

    return result;
}

