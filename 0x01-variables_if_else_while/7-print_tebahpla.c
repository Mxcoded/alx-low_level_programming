#include <stdio.h>
/**
*main- Print a-z in reverse order
*Return:Always (0) i.e Success
*/
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
