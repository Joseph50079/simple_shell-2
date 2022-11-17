#include "shell.h"

/**
 * execute - executing function
 * @agrv: argument variable
 * Return: 1 if sucessful
 */

int execute(char **argv)
{
	int n = strlen(*argv);
	char *cmd = malloc(sizeof(char) * 9 + n);
	pid_t pid;
	char *env[] = {NULL};

	if (cmd == NULL)
	{
		return (0);
		perror("Error no command");
	}
	cmd = argv[0];
	if (!argv)
	{
		return (0);
		exit(1);
		perror("Error");
	}
	pid = fork();
	if (pid == 0)
	{
		if(execve(cmd, argv, env) == -1)
		{
			free(cmd);
			perror("Error");
			return (-1);
		}
	}
	else
	{
		wait(NULL);
	}
	return (1);
}
