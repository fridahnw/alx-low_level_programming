#include "main.h"
#include <string.h>

/**
 * append_text_to_file - appends text at the end of a file.
 *
 * @filename: name of file
 * @text_content: text to be appended
 *
 * Return: 1 on success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, written;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_APPEND | O_WRONLY);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		written = write(fd, text_content, strlen(text_content));
		if (written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
