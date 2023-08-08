#include "main.h"

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
	int fd, i;
	int writen;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC | S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
		{
			i = i + 1;
		}
		writen = write(fd, text_content, i);
		if (writen <= 0)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
