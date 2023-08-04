#include "main.h"

/**
 * main - prints the minimum number of coins to make change for an amount of
 *        money
 * @argc: number of arguments passed to program
 * @argv: array of pointers to each command line argument
 * Return: 0 if program executed properly, else 1
 */

int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		coins++;
	}

	printf("%d\n", coins);

	return (0);
}
