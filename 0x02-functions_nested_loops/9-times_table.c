#include "main.h"

/**
 * print_digit - prints digit
 * @n: number to print
 */


void print_digit(int n)
{
	if (n < 10)
		_putchar(' ');
	else if (n > 9)
		_putchar(n / 10 + '0');
	_putchar(n % 10 + '0');
}

/**
 * times_table - prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int n, i;

	for (n = 0; n < 10; n++)
	{
		for (i = 0; i < 10; i++)
		{
			if (i != 0)
				print_digit(n * i);
			else
				_putchar('0');
			if (i != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar('\n');
		}
	}
}
