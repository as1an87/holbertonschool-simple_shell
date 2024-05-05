#include "main.h"
/**
 * print_prompt - Prints the command prompt
 * @status: Indicates if input is from a terminal
 */
void print_prompt(int status)
{
	if (status)
		printf("#cisfun$ ");
	else
		errno = 0;
}
