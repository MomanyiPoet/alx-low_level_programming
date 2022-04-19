#include "main.h"
#include <stdio.h>

/**
 * print_number - prints int with putchar
 * @n: takes number, hello
 * Return: 0
 */
void print_number(int n)
{
	unsigned int m;

	if (n < 0)
	{
		putchar('-');
		m = -n;
	}
	else
	{
		m = n;
	}
	if (m / 10 != 0)
		print_number(m / 10);
	putchar((m % 10) + '0');
}
