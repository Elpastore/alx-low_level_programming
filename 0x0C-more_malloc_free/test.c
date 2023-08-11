#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int is_valid_number(const char *str) {
    while (*str) {
        if (!isdigit(*str)) {
            return 0;
        }
        str++;
    }
    return 1;
}

unsigned long long multiply(unsigned long long a, unsigned long long b) {
    return a * b;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        const char *error = "Error\n";
        for (int i = 0; error[i] != '\0'; i++) {
            putchar(error[i]);
        }
        return 98;
    }

    if (!is_valid_number(argv[1]) || !is_valid_number(argv[2])) {
        const char *error = "Error\n";
        for (int i = 0; error[i] != '\0'; i++) {
            putchar(error[i]);
        }
        return 98;
    }

    unsigned long long num1 = strtoull(argv[1], NULL, 10);
    unsigned long long num2 = strtoull(argv[2], NULL, 10);

    unsigned long long result = multiply(num1, num2);

    // Printing the result using putchar
    if (result == 0) {
        putchar('0');
    } else {
        char buffer[20]; // Assuming the result will fit in 20 characters
        int index = 0;
        while (result > 0) {
            buffer[index++] = '0' + (result % 10);
            result /= 10;
        }
        while (index > 0) {
            putchar(buffer[--index]);
        }
    }
    
    putchar('\n');

    return 0;
}

