#include <strings.h>
#include "main.h"
/**
* _memcpy - copy memory area
*
* @dest: save copy memory here
* @src: copy memory area from here
* @n: number of times to cop
* Return: char dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
