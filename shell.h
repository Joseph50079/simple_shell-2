#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <dirent.h>

void prompt(void);
char *read_cline(void);
char **tokenize(char *line);
int execute(char **argv);




#endif
