#include "shell.h"

/**
 * *tokenize - returns a tokenize strings in buffer
 * @line: parameter recieving the strings
 * Return: argv the tokenized buffer
 */

char **tokenize(char *line)
{
	int count = 0;
	char **argv, *token;
	char *delimit = " \n\t";

	token = strtok(line, delimit);
	while (token != NULL)
	{
		argv[count] = strdup(token);
		token = strtok(NULL, delimit);
		count++;
	}
	argv[count] = token;
	return (argv);
}
