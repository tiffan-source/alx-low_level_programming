#include "main.h"

/**
 * more_numbers -  prints 10 times the numbers,
 * from 0 to 14, followed by a new line
 */

void more_numbers(void)
{
	int number, i;

	for (i = 0; i < 10; i++)
	{
		for (number = 0; number < 15; number++)
		{
			if (number > 9)
				_putchar(number / 10 + '0');
			_putchar(number % 10 + '0');
		}
		_putchar('\n');
	}
}
