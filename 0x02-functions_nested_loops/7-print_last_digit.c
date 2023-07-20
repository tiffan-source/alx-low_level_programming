#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: number to handle
 * Return: last digit of a number
 */

int print_last_digit(int n)
{
	_putchar((n % 10) + '0');

	return (n % 10);
}
