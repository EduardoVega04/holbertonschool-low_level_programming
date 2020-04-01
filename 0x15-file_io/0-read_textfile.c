#include "holberton.h"
/**
 * read_textfile - Reads a text file and prints to POSIX stdout
 * @filename: Name of the file
 * @letters: Number of letters it should read and print
 *
 * Return: Numbers of bytes printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nr_bytes;
	char *buff;

	buff = malloc(letters);
	if (buff == NULL)
	{
		return (0);
	}

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	nr_bytes = read(fd, buff, letters);

	if (nr_bytes == -1)
	{
		return (-1);
	}

	write(STDOUT_FILENO, buff, nr_bytes);
	close(fd);

	return (nr_bytes);
}
