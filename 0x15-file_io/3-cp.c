#include "main.h"

/**
 * str_error - prints error meassage to stderr and exits the program.
 * @format: The error string format.
 * @str: The string to be replaced in the format.
 * @status: The status of the exit function.
 * Return: Nothing.
 */
void str_error(char *format, char *str, int status)
{
	dprintf(STDERR_FILENO, format, str);
	exit(status);
}

/**
 * num_error - prints error meassage to stderr and exits the program.
 * @format: The error string format.
 * @num: The number to be replaced in the format.
 * @status: The status of the exit function.
 * Return: Nothing.
 */
void num_error(char *format, int num, int status)
{
	dprintf(STDERR_FILENO, format, num);
	exit(status);
}

/**
 * main - A program that copies the content of a file to another file.
 * @argc: The number of arguments passed to the program.
 * @argv: The argument list of the program.
 * Return: 0 on success, or exit with 97, 98, 99, or 100 on failure.
 *
 * Description:
 * - Usage: cp file_from file_to
 * - if the number of argument is not the correct one, exit with code 97
 *	and print Usage: cp file_from file_to, followed by a new line,
 *					on the POSIX standard error.
 * - if file_to already exists, truncate it.
 * - if file_from does not exist, or if you can not read it, exit with code 98
 *	and print "Error: Can't read from file NAME_OF_THE_FILE",
 *	followed by a new line, on the POSIX standard error.
 * - if you can not create or if write to file_to fails, exit with code 99
 *	and print "Error: Can't write to NAME_OF_THE_FILE",
 *	followed by a new line, on the POSIX standard error.
 * - if you can not close a file descriptor , exit with code 100 and print
 *	"Error: Can't close fd FD_VALUE", followed by a new line,
 *	on the POSIX standard error.
 * - Permissions of the created file: rw-rw-r--. If the file already exists,
 *						do not change the permissions.
 * - You must read 1,024 bytes at a time from the file_from to make
 *				less system calls. Use a buffer.
 * - You are allowed to use dprintf.
 */
int main(int argc, char *argv[])
{
	int from, to, r, w, c, buf[1024];

	if (argc != 3)
		str_error("Usage: cp file_from file_to\n", NULL, 97);

	from = open(argv[1], O_RDONLY);
	r = read(from, buf, 1024);
	if (from == -1 || r == -1)
		str_error("Error: Can't read from file %s\n", argv[1], 98);

	to = open(argv[2], O_CREAT | O_WRONLY | O_APPEND | O_TRUNC, 0664);
	if (to == -1)
		str_error("Error: Can't write to %s\n", argv[2], 99);

	while (r != 0)
	{
		w = write(to, buf, r);
		if (w == -1)
			str_error("Error: Can't write to %s\n", argv[2], 99);

		r = read(from, buf, 1024);
		if (r == -1)
			str_error("Error: Can't read from file %s\n", argv[1], 98);
	}

	c = close(from);
	if (c == -1)
		num_error("Error: Can't close fd %d\n", from, 100);

	c = close(to);
	if (c == -1)
		num_error("Error: Can't close fd %d\n", to, 100);

	return (0);
}
