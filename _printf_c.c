#include <unistd.h>
#include <limits.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _print_c - A function for printing characters
 * @a: leng
 * @b: char
 * Return: Printing charecters
 **/
int _print_c(unsigned int *a, char b)
{
	if (!b && b != '\0')
	{
		write(1, "(null)", 6);
		*a += 6;
	}
	else
	{
		write(1, &b, 1);
		(*a)++;
	}
return (*a);
}
