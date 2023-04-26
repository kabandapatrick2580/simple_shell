#include "main.h"
/**
 * shell_loop - runs the main loop of the simple shell
 *
 * Return: void
 */
void shell_loop(void)
{
	char *prompt = "(simple_shell) $)";
	char *lineptr = NULL;
	size_t n = 0;
	ssize_t read;
	int status;

	while (1)
	{
		printf("%s", prompt);
		read = getline(&lineptr, &n, stdin);

		if (read == -1)
		{
			putchar('\n');
			break;
		}
		lineptr[read - 1] = '\0';
		status = execute_command(lineptr);
		status = execute_command2(lineptr);

		if (status == -1)
		{
			continue;
		}
	}
	free(lineptr);
}
