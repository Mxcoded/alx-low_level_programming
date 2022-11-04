#include <stdio.h>
/**
* main - Print the program name
* @argc: Counter
* @argv: Array
*/
int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n",argv[i]);
	}
	return (0);
}
