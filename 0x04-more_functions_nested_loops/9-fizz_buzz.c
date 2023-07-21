#include <stdio.h>

/**
 * main - program that prints the numbers from 1 to 100,
 * followed by a new line
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else
			printf("%d", i);

		if (i == 100)
			printf("\n");
		else
			printf(" ");
	}

	return (0);
}
