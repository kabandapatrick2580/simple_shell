#include "main.h"
/**
 * get_input - get input form user
 *
 * Return: pointer to input string
 */
char *get_input(void)
{
	char *lineptr = NULL;
	size_t n  = 0;

	printf("(simple_shell) $ ");
	getline(&lineptr, &n, stdin);

	return (lineptr);
}
