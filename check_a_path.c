#include "main.h"

/**
 * check_path - check if the command exists in PATH directories
 *
 * @command: the command to check if they're good
 * Return: the full path of the cmd found, otherwise NULL
 */
char *check_path(char *command)
{
	char *path = getenv("PATH");
	char *dir, *full_path;
	struct stat st;

	if (!path)
		return (NULL);

	dir = strtok(path, ":");
	while (dir)
	{
		full_path = malloc(strlen(dir) + strlen(command) + 2);
		if (!full_path)
			return (NULL);

		sprintf(full_path, "%s/%s", dir, command);
		if (stat(full_path, &st) == 0)
			return (full_path);
		free(full_path);
		dir = strtok(NULL, ":");
	}
	return (NULL);
}
