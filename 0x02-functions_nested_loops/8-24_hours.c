#include "main.h"

/**
 * print_digit - prints digit
 * @n: number to print
 */


void print_digit(int n)
{
	if (n < 0)
		_putchar('0');
	else
		_putchar(n / 10 + '0');
	_putchar(n % 10 + '0');
}

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 */

void jack_bauer(void)
{
	int min, h;

	for (h = 0; h < 24; h++)
	{

		for (min = 0; min < 60; min++)
		{
			print_digit(h);
			_putchar(':');
			print_digit(min);
			_putchar('\n');
		}
	}
}
