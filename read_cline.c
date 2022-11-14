#include "shell.h"

/**
 * read_cline - reads the input from the command line
 *
 * Return: buf
 */

char *read_cline(void)
{
	char *buf = NULL;
	ssize_t line_num;
	size_t n = 0;

	line_num = getline(&buf, &n, stdin);
	if (line_num == -1)
	{
		perror("Error");
		return (NULL);
	}
	if (buf == NULL)
	{
		perror("Error");
		return (NULL);
	}
	return (buf);
}
