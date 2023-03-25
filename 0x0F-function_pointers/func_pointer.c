#include <stdio.h>
#include <stdlib.h>
//We want to create a program using function pointer to change the element of an array according to the next statement:
//replace by 0 if the element is divided by 2 else by 1.

/**
 * array_rep -function that replace an element of array by 0 or 1
 * @array: the array
 * @size: size of array
 */
void array_rep(int *array, size_t size)
{
	int i;

	for (i = 0; i < size; i++)
	{	
		if (array[i] % 2 == 0)
			array[i] = 0;
		else
			array[i] = 1;
	}
}
void print_array(int *array, size_t size)
{
	printf("[");
	int i;

	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if ( i < size - 1)
			printf(", ");
	}
	printf("]\n");
}
void modify_array(int *array, size_t size, void (*func_ptr)(int *, size_t))
{
	if (array != NULL && func_ptr != NULL)
		func_ptr(array, size);
}
int main(void)
{
	int array[] = {2, 5, 3, 4, 6, 10};
	size_t size = sizeof(array) / sizeof(int);
	
	printf("the size = %ld\n", size);
	printf("Original array : ");
	print_array(array,size);
	
	printf("Modify array : ");	
	//array_rep(array, size);	
	modify_array(array,size, array_rep);
	print_array(array,size);
}
