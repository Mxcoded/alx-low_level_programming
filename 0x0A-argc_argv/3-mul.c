#include <stdio.h>
#include <stdlib.h>
/**
* main - Entery point
*
* @argc: Counter
* @argv: Array
* Return: 0 if no error, 1 if there is an error
*/
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
