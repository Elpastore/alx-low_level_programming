#include <stdio.h>
/**
 * main -the entry point
 * Return: zero if no error
 */
int main()
{
    int n, i, factor;
    
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    printf("Prime factors of %d are: ", n);
    
    // Check for factors of 2
    while (n % 2 == 0) {
        printf("2 ");
        n = n / 2;
    }
    
    // Check for odd factors
    for (i = 3; i <= n; i = i + 2) {
        while (n % i == 0) {
            printf("%d ", i);
            n = n / i;
        }
    }
    
    // If n is a prime number greater than 2
    if (n > 2) {
        printf("%d ", n);
    }
    
    return 0;
}

