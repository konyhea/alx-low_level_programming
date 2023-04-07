#include "main.h"

/**
 * @is_palindrome_helper - function that help 
 * @s: the character to check
 * @start: to start your search from end
 * @end: the end of your search
 * Return: Always Success
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	else if (s[start] != s[end])
	{
		return (0);
	}
	else
	{
	return ((is_palindrome_helper(s, start + 1, end - 1));
	}
}
