#include <stdio.h>
#include "main.h"

/**
 * main - main writes
 *
 * @argc: argements
 *
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
