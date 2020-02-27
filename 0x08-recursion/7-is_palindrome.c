#include "holberton.h"
#include <stdio.h>
/**
 *_strlen_recursion - returns string length
 * @s: string to manipulate
 * Return: string length
 */

int string_length(char *s)
{
if (!*s)
{
return (0);
}
s++;
return (string_length(s) + 1);
}

/**
 * helper_palindrome - helper for palindrome
 * @s: string to manipulate
 * @len: length
 * Return: Varies depending on conditions
 */

int helper_palindrome(char *s, int len)
{
if (len <= 1)
return (1);
else if (*s == *(s + len - 1))
{
return (helper_palindrome(s + 1, len - 2));
}
else
return (0);
}

/**
 * is_palindrome - Checks if the string is palindrome
 * @s: string
 * Return: 1 if it's palindrome, 0 if it's not
 */

int is_palindrome(char *s)
{
int len;

len = string_length(s);
if (len <= 1)
return (1);
return (helper_palindrome(s, len));
}
