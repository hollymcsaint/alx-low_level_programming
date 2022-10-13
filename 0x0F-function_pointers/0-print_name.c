#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - A function that print name
 *
 * @name: name of the person
 *
 * @f: function pointer that returns nothing
 *
 * Return: zero (Success)
 */

void print_name(char *name, void (*f)(char *))
{
	if(name && f)
		f(name);
}
