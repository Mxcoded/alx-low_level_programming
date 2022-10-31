#include <strings.h>
#include "main.h"

/**
* _memset - Set memory to array
*
* @s: array to set
* @b: value to set it as
* @n: number of times
* Return: char s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
