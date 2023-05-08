#include "main.h"

#define BUFFER 1024 /* Size to read or write*/
#define ARG_ERROR 97 /* ARGUMENT ERROR*/
#define R_ERROR 98 /* READ ERROR*/
#define W_ERROR 99 /*WRITE ERROR */
#define C_ERROR 100	/* Close ERROR*/

/**
* main - entry point.
* Description: This program
* copies the content of a file
* to another file.
* @argc: argument counter.
* @argv: argument array.
* Return: 0
*/

int main(int argc, char **argv)
{
	int fd1, fd2;
	ssize_t n;
	char string[BUFFER];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (ARG_ERROR);
	}
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (R_ERROR);
	}
	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		return (W_ERROR);
	}
	while ((n = read(fd1, string, BUFFER)) > 0)
	{
		write(fd2, string, BUFFER);
	}
	fd1 = close(fd1);
	fd2 = close(fd2);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		return (C_ERROR);
	}
	else if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		return (C_ERROR);
	}
	return (EXIT_SUCCESS);
}
