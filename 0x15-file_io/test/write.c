#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
	FILE *fp = NULL;

	char str[50];
	int i;
	fp = fopen("abc.txt", "w");

	if (fp == NULL)
	{
		printf("Error");
		exit(1);
	}
	printf("enter the string");
	fgets(str,sizeof(str), stdin);

	for(i = 0; i < strlen(str); i++)
	{
		fputc(str[i], fp); 
	}	
	fclose(fp);
}
