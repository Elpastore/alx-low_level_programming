#include <stdio.h>
//add funtion perform operator addition
void add (int a, int b)
{
	printf("%d\n", a + b);
}
//sub function perform substraction
void sub (int a, int b)
{
	printf("%d\n", a - b);
}
//mult function performs multiplication
void mult (int a, int b)
{
	printf("%d\n", a * b);
}
//div function performs division
void div (int a, int b)
{
	printf("%d\n", a / b);
}
void main ()
{
	void (*fptr[4])(int, int) = {add, sub, mult, div};

	int  a, b, ch;

	printf("Enter your choice:\n ");
	scanf("%d", &ch);
	printf("Enter a and b:\n ");
	scanf("%d%d", &a , &b);
	
	(*fptr[ch])(a, b);

}
