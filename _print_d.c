#include <unistd.h>
#include <limits.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _print_d - A function for printing decimals
 * @a: leng
 * @b: char
 * Return: Printing decimals
 **/
int _print_d(unsigned int *a, int b)
{
	int mod = 0, c = 0;
	unsigned int n;
	char eded[11], zero = 48;

	if (b < 0)
	{
		write(1, &zero, 1);
		a++;
		n = -1 * b;
	}
	else
		n = b;
	if (n == 0)
	{
		write(1, &zero, 1);
		return (*a + 1);
	}
	while (n > 0)
	{
		mod = n % 10;
		eded[c] = mod + 48;
		n = n / 10;
		c++;
	}
	a = a + c;
	c = c - 1;
	while (c >= 0)
	{
		write(1, &eded[c], 1);
		c--;
	}
	return (*a);
}
