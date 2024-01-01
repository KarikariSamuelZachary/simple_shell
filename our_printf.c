#include "shell.h"

/**
 * our_printf - Prints a string
 * @input: String input
 */
void our_printf(const char *input, ...)
{
	write(STDOUT_FILENO, input, strlen(input));
}

