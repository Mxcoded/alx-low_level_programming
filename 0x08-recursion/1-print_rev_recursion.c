#include "main.h"
/**
* _print_rev_recursion - Print Reverse world;
* @s: The string
* Return: void
*/
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
	{
		_putchar('\n');
	}
}