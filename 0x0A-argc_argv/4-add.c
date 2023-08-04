#include "main.h"

/**
 * check_string_is_number - checks if a string is a number
 * @s: string to check
 * Return: 1 if string is a number, 0 if not
 */

int check_string_is_number(char *s)
{
	if (*s == '\0')
		return (1);

	if ((*s < '0' || *s > '9') && *s != '-')
		return (0);

	return (check_string_is_number(++s));
}

/**
 * main - prints the sum of two numbers
 * @argc: number of arguments passed to program
 * @argv: array of pointers to each command line argument
 * Return: 0 if successful, 1 if error
 */

int main(int argc, char *argv[])
{
	int sum = 0, len = argc - 1;

	while (len--)
	{
		if (!check_string_is_number(argv[len + 1]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[len + 1]);
	}

	printf("%d\n", sum);

	return (0);
}
