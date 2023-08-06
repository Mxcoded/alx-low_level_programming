#include "main.h"
#include <stdio.h>
#define UNUSED(x) (void)(x)

/**
 * main - Entry point
 *
 * @argc: argument c
 * @argv: vector of arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	UNUSED(argv);
	printf("%d\n", argc - 1);
	return (0);
}
