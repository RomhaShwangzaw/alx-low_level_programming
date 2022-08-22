#include "main.h"

/**
 * create_file - creates a file.
 * @filename: The name of the file to be created.
 * @text_content: A NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure (file can not be created,
 *		file can not be written, write “fails”, etc…)
 *
 * Description:
 * - The created file must have those permissions: rw-------.
 * - If the file already exists, do not change the permissions.
 * - if the file already exists, truncate it.
 * - if filename is NULL return -1.
 * - if text_content is NULL create an empty file.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len, bytes_written;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	for (len = 0; text_content[len];)
		len++;

	bytes_written = write(fd, text_content, len);
	if (bytes_written == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
