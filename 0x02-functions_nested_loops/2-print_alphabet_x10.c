#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times,
 * in lowercase, followed by a new line.
 */

void print_alphabet_x10(void)
{
	char letter = 'a';
	int n;

	for (n = 0; n < 10; n++)
	{
		for (letter = 'a'; letter != 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}

}
