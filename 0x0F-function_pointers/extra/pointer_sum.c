#include <stdio.h>

int sum(int x, int y)
{
	return (x + y);
}
int main()
{
	int (*ptr_sum)(int, int);
	int result;
	ptr_sum = &sum;
	result = (*ptr_sum)(2, 3);
	printf("%d\n", result);
	return 0;
}
