#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: The name of the file.
 * @letters: The number of letters it should read and print.
 * Return: The actual number of letters it could read and print.
 *
 * Description:
 * - if the file can not be opened or read, return 0.
 * - if filename is NULL return 0.
 * - if write fails or does not write the expected amount of bytes, return 0.
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes_read, bytes_written;
	int fd;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters + 1));
	if (!buf)
	{
		close(fd);
		return (0);
	}

	bytes_read = read(fd, buf, letters);
	if (bytes_read == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	buf[bytes_read] = '\0';
	close(fd);

	bytes_written = write(STDOUT_FILENO, buf, bytes_read);
	if (bytes_written < bytes_read)
	{
		free(buf);
		return (0);
	}

	free(buf);
	return (bytes_written);
}
