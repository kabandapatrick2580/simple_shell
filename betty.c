#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 *
 * Return: 0 always success
 */
int main(void)
{
	int y = 2023;
	int *p = &y;

	printf("%d", y);
	printf("%d", *p);

	return (0);
}
