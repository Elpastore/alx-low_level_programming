#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
	FILE *fp = NULL;
	char str[50];
	fp = fopen("abc.txt", "a");

	if (fp == NULL)
	{
		printf("Error");
		exit(1);
	}
	printf("Enter the content you want to append: ");
	fgets(str, sizeof(str), stdin);

	fprintf(fp,"\n%s", str);
	printf("\nsuccessfully apppened");
	fclose(fp);
}
