#include <stdio.h>

/*
 * main - Program that prints the name of the file it was compiled from followed 
 * by a new line
 *
 * Return: zero (Success)
 *
 */

int main(void)
{
	printf("%s\n", _FILE_);
	
	return 0;
}
