#include "shell.h"

/**
 * prompt - prints prompt to stdout
 */

void prompt(void)
{
	char *p = "#cisfun$ ";
	int mode_int = 1;
	ssize_t fd;

	if (mode_int)
	{
		if ((mode_int = isatty(STDIN_FILENO)) == 0)
		{
			perror("Error");
		}
		fd = write(STDOUT_FILENO, p, 9);
		if (fd == -1)
		{
			exit(-1);
		}
	}
}
