#include "main.h"
#include <stdio.h>
/**
 * len_s -function give the len og s
 * @s: string o be printed in reverse
 * len_s -function give the len og s
 */

void len_s(char *s)
{
        int len_s, i;

        for (i = 0; *s != '\0'; i++)
                len_s = i;
        printf("%d", len_s);
}

int main(void)
{
	char *s = "Colton Walker";

	len_s(*s);
	return (0);
}
