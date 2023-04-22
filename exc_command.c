#include "main.h"

/**
 * execute_command - executes a single-word command
 * @command: the cmd to execute
 * Return: 0 on success, -1 on failure
 */
int execute_command(char *command)
{
	char *argv[] = {command, NULL};

	if (execve(argv[0], argv, environ) == -1)
	{
		perror("Error");
		return (-1);
	}

	return (0);
}
