#include "holberton.h"

/**
 * print_error - Print the error using dprintf
 * @mensaje: Error message to show
 * @argv_error: File related to the error
 * @exit_code: Exit status code
 **/
void print_error(char *mensaje, char *argv_error, int exit_code)
{
	dprintf(STDERR_FILENO, "%s %s\n", mensaje, argv_error);
	exit(exit_code);
}

/**
 * print_error_write - Print the error and close the file descriptor
 * @mensaje: Error message to show
 * @exit_code: Exit status code
 **/
void print_error_write(char *mensaje, int exit_code)
{
	write(STDERR_FILENO, mensaje, strlen(mensaje));
	exit(exit_code);
}

/**
 * main - Entry point. Copies the content of a file to another file
 * @argc: Numbers of arguments
 * @argv: Arguments
 *
 * Return: Return 0
 **/
int main(int argc, char *argv[])
{
	int file_from, file_to, read_file_from, write_file_to, close_file_to,
close_file_from;
	char buffer[1024];

	if (argc != 3)
		print_error_write("Usage: cp file_from file_to\n", 97);

	file_from = open(argv[1], O_RDONLY);
	if (file_from < 0)
		print_error("Error: Can't read from file", argv[1], 98);

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to < 0)
		print_error("Error: Can't write to", argv[2], 99);

	read_file_from = read(file_from, buffer, 1024);

	while (read_file_from > 0)
	{
		write_file_to = write(file_to, buffer, read_file_from);
		if (write_file_to < 0)
			print_error("Error: Can't write to", argv[2], 99);

		read_file_from = read(file_from, buffer, 1024);
	}

	if (read_file_from < 0)
		print_error("Error: Can't read from file", argv[1], 98);

	close_file_to = close(file_to);
	if (close_file_to < 0)
		print_error("Error: Can't close fd", argv[2], 100);

	close_file_from = close(file_from);
	if (close_file_from < 0)
		print_error("Error: Can't close fd", argv[1], 100);

	return (0);
}
