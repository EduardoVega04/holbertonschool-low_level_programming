#include "holberton.h"
/**
 * create_file - Reads a text file and prints to POSIX stdout
 * @filename: Name of the file
 * @text_content: Text to write to the file
 *
 * Return: Numbers of bytes printed
 */
int create_file(const char *filename, char *text_content)
{
	int crear;
	int llenar;

	if (filename == NULL)
	{
		return (-1);
	}

	crear = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (crear < 0)
	{
		return (-1);
	}

	llenar = write(crear, text_content, strlen(text_content));

	if (llenar < 0)
	{
		return (-1);
	}
	return (crear);
}
