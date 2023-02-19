#include <stdio.h>

int main() {
    int i = 0;
    int j;

    while (i < 10) {
        j = 0;
        while (j < 10) {
            if (i != j) {
                putchar(i + '0');
                putchar(j + '0');
                putchar(',');
                putchar(' ');
            }
            j++;
        }
        i++;
    }

    return 0;
}

