#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
    int n, i, largest_factor;
    
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    largest_factor = 2;
    
    while (n % 2 == 0) {
        n /= 2;
    }
    
    for (i = 3; i <= n; i += 2) {
        while (n % i == 0) {
            largest_factor = i;
            n /= i;
        }
    }
    
    if (n > 2) {
        largest_factor = n;
    }
    
    printf("Largest prime factor of %d is: %d\n", n, largest_factor);
    
    return 0;
}

