#include "shell.h"

/**
 * main - shell main function
 *
 * Return: 0 if while loop execution exits
 */

int main(void)
{
	char *line, **argv;
	int status = 1;

	while (status)
	{
		prompt();
		line = read_cline();
		argv = tokenize(line);
		status = execute(argv);
	}
	return (0);
}
