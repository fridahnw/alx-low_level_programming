#include "main.h"
#include <string.h>

/**
 * create_file - creates a file.
 *
 * @filename: name of filr
 * @text_content: what is to be written
 *
 * Return: 1 if it agrees
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int writen;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC | 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		writen = write(fd, text_content, strlen(text_content));
		if (writen <= 0)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
