#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it
 *
 * @filename: name of filr
 *
 * @letters: length of it
 * Return: number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t x, y;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buff = malloc(sizeof(char) * (letters));
	if (buff == NULL)
	{
		close(fd);
		return (0);
	}
	x = read(fd, buff, letters);
	if (x <= 0)
	{
		free(buff);
		close(fd);
		return (0);
	}
	y = write(STDOUT_FILENO, buff, x);
	if (y != x)
	{
		free(buff);
		close(fd);
		return (0);
	}
	free(buff);
	close(fd);
	return (x);
}
