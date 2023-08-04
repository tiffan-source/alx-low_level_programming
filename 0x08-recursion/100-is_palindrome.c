#include "main.h"

/**
 * string_len - returns the length of a string
 * @s: string to get length of
 * Return: length of string
 */

int string_len(char *s)
{
	if (s == NULL && *s == '\0')
		return (0);

	return (1 + string_len(s + 1));
}

/**
 * is_palindrome_helper - checks if a string is a palindrome
 * @s: string to check
 * @position: current position in string
 * @string_len: length of string
 * Return: 1 if s is a palindrome, 0 otherwise
 */

int is_palindrome_helper(char *s, int position, int string_len)
{
	if (position > string_len)
		return (1);

	if (s[position] != s[string_len - 1])
		return (0);

	return (is_palindrome_helper(s, position + 1, string_len - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 * Return: 1 if s is a palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	return (is_palindrome_helper(s, 0, string_len(s)));
}
