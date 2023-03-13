#include <stdio.h>
int lenght_string(char *c)
{
	int leng ;

        for (leng = 0; c[leng] != '\0'; leng++)
	{
        }
	return (leng);
}
int main(void)
{
	char *c = "Hello";
	int lenght;
	lenght = lenght_string(c);

	printf("%d\n", lenght);
	return (0);
}
