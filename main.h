#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>

extern char **environ;
void shell_loop(void);
int execute_command(char *command);
int execute_command2(char *command);
char *check_path(char *command);
#endif
