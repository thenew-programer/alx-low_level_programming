#include "main.h"

/**
* main - entry point.
* Description: This program copies the content of a file
* to another file.
* @argc: argument counter.
* @argv: argument array.
* Return: 0
*/

int main(int argc, char **argv)
{
	/* file descriptor for File_from and File_to respectively */
	int fd1, fd2;

	/* Check for number of arguments provided */
	if (argc != 3)
	{
		dprintf(STDERR_FILENO,"Usage: cp file_from file_to\n");
		return (97);
	}

	/* Open file_from on read mode only*/
	fd1 = open(argv[1], O_RDONLY);
	/* if file_from doesn't exist*/
	if (fd1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}


	/* Open file_to read only*/
	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		return (99);
	}


	return (EXIT_SUCCESS);
}
