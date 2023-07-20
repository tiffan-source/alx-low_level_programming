#include "main.h"

/**
 * _islower - checks for lowercase character.
 * @c: char to check
 * Return: 1 if lowecase 0 otherwhise
 */

int _islower(int c)
{
	return ((c >= 'a' && c <= 'z') ? 1 : 0);
}
