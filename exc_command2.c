#include "main.h"
/**
 * execute_command2 - execute the command
 *
 * @command: 0 on success, -1 on failure
 * Return: 0 on a success, -1 on failure
 */
int execute_command2(char *command)
{
	pid_t child_pid;
	int status;
	char *path = check_path(command);

	if (!path)
	{
		printf("%s: command not found\n", command);
		return (-1);
	}

	child_pid = fork();
	if (child_pid == -1)
	{
		perror("fork");
		return (-1);
	}
	if (child_pid == 0)
	{
		if (execve(path, (char *[]) { command, NULL }, NULL) == -1)
		{
			perror("execve");
			free(path);
			return (-1);
		}
	}
	wait(&status);
	free(path);

	return (0);
}

