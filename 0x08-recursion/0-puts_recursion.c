#include "main.h"

/**
 *_puts_recursion - A function that print a string follow by a new name.
 *
 *@s: String to be printed
 *
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar (*s);
	_puts_recursion(s + 1);
}








