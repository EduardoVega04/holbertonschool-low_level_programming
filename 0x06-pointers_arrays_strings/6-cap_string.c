#include "holberton.h"
/**
 * cap_string - capitalize words in a string
 * @s: string to test
 *
 * Return: Return capitalized words
 */
char *cap_string(char *s)
{
int i = 1;
while (s[i] != '\0')
{
if ((s[i] >= 'a' && s[i] <= 'z')
&& (s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n'
|| s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.'
|| s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"'
|| s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{'
|| s[i - 1] == '}'))
{
s[i] -= 32;
}
i++;
}
return (s);
}
