#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
extern char **environ;
void shell_loop(void);
int execute_command(char *command);
#endif
