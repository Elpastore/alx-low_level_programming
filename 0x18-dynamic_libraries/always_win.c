#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int printf(const char *format, ...)
{
	char *message = "Congratulations, you win the Jackpot!\n";
	char *numbers = "9 8 10 24 75 - 9\n";

	write(1, numbers, strlen(numbers));
	write(1, message, strlen(message));

	exit(EXIT_SUCCESS);
}	
