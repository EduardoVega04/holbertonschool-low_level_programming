#include "holberton.h"
/**
 * append_text_to_file - Reads a text file and prints to POSIX stdout
 * @filename: Name of the file
 * @text_content: Text to fill the file
 *
 * Return: 1 if success or -1 if error
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int crear;
	int llenar;

	if (filename == NULL)
	{
		return (-1);
	}

	crear = open(filename, O_WRONLY | O_APPEND);

	if (crear < 0)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		close(crear);
		return (1);
	}

	llenar = write(crear, text_content, strlen(text_content));

	if (llenar < 0)
	{
		return (-1);
	}

	close(crear);
	return (1);
}
