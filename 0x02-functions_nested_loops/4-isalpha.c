#include "main.h"

/**
 *  * _isalpha - a function that checks for alphabetic characters
 *
 *     * @c: The character in ASCII code
 *
 *       * Return: 1 if c is letters,lowercase or uppercase. otherwise 0.
 *
 */

int _isalpha(int c)

{

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))

	{

		return (1);

	}

	else

	{

		return (0);

	}

	_putchar('\n');

}
