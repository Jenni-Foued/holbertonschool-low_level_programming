#include "holberton.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints
 * it to the POSIX standard output.
 * @filename: Filename address.
 * @letters: Number of chars to be printed.
 * Return: Number of chars printed.
 **/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d, read_flag, write_flag;
	char *file_cp;

	if (filename == NULL)
		return (0);

	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
		return (0);

	file_cp = malloc(sizeof(char) * letters);
	if (file_cp == NULL)
		return (0);

	read_flag = read(file_d, file_cp, letters);
	if (read_flag == -1)
	{
		free(file_cp);
		return (0);
	}

	write_flag = write(STDOUT_FILENO, file_cp, read_flag);
	free(file_cp);
	close(file_d);
	if (write_flag != read_flag)
		return (0);
	return (write_flag);
}
