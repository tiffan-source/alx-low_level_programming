#include <stdio.h>
#include <math.h>

/**
 * check_prime - check if number is prime
 * @number: number to check
 * Return: 1 if true 0 else
 */

int check_prime(long int number)
{
	long int i = 2;

	while (number < i * i)
	{
		if (number % i == 0)
			return (1);
		i++;
	}

	return (0);
}

/**
 * main - finds and prints the largest prime factor
 * of the number 612852475143, followed by a new line.
 * Return: always 0
 */

int main(void)
{
	long int number = (long int)sqrt(612852475143);

	while (number != 1)
	{
		if (check_prime(number) && 612852475143 % number == 0)
		{
			printf("%ld\n", number);
			break;
		}
		number--;
	}

	return (0);
}
