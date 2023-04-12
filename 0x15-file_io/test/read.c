#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
	FILE *fp = NULL;

	//char ch;
	char str[100];
	//int i;
	fp = fopen("abc.txt", "r");

	if (fp == NULL)
	{
		printf("Error");
		exit(1);
	}
	//printf("enter the string");
	//fgets(str,sizeof(str), stdin);
	while (!feof(fp))
	{	
		//ch = fgetc(fp); // to read only one character
		 fgets(str,100,fp);
		printf("%s", str); // to display the contain on a screen
	}
	
	/*for(i = 0; i < strlen(str); i++)
	{
		fputc(str[i], fp); 
	}
	*/
	fclose(fp);
}
