#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 * @c: char to check
 * Return: 1 if alphabetic 0 otherwhise
 */

int _isalpha(int c)
{
	return (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) ? 1 : 0);
}
