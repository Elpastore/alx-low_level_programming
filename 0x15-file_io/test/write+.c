#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
	FILE *fp = NULL;
	fp = fopen("cashew.txt", "w+");
	char str[50];
	if (fp == NULL)
	{
		printf("Error");
		exit(1);
	}
	fputs("DNA extraction", fp);
	rewind(fp);

	while(!feof(fp))
	{
		fgets(str,40,fp);
		printf("%s\n",str);
	}	
	fclose(fp);
}
