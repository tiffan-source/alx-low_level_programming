#include "main.h"

/**
 * print_number - print a number
 * @n: number to print
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		print_number(-n);
		return;
	}
	else if (n > 9)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line.
 * @n: number to handle
 */

void print_to_98(int n)
{
	int add = n >= 98 ? -1 : 1;

	while (n != 98)
	{
		print_number(n);
		_putchar(',');
		_putchar(' ');

		n += add;
	}

	print_number(98);
	_putchar('\n');
}
