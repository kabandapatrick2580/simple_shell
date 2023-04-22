#include "main.h"

/**
 * main - print bolilerplate
 *
 * @argv: argument value
 * @ac: count
 * Description: description
 * Return: 0 always success
 */
int main(int ac, char **argv)
{
	char *prompt = "(simple_shell) $";
	char *lineptr;
	size_t n = 0;
	(void)ac;
	(void)argv;
	printf("%s", prompt);
	getline(&lineptr, &n, stdin);
	printf("%s\n", lineptr);
	free(lineptr);
	shell_loop();
	return (0);
}
