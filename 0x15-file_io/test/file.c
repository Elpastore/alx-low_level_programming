#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	FILE *fp;
	fp = fopen("filename.txt", "w");
	char str[50] = "Abdoulaye Sadio";
	fputs(str, fp);
	fprintf(fp, "%s\n", "Hello world");
	fclose(fp);
	return (0);
}
