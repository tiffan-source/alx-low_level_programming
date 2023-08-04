#include "main.h"

/**
 * main - prints all arguments it receives.
 * @argc: number of arguments
 * @argv: array of pointers to strings that are the arguments to argc
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
		printf("%s\n", argv[i++]);

	return (0);
}
