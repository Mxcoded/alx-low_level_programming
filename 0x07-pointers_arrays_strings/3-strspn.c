#include "main.h"
/**
* _strspn -  Get the length of prefix substring
*
* @s: segment
* @accept: bytes
* Return: int bytes
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				bytes++;
				break;
			}
		}
		if (s[j] == '\0')
			return (bytes);
	}
	return (bytes);

}
