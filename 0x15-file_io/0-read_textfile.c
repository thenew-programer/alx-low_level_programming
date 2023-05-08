#include "main.h"
#include <stdio.h>

/**
* read_textfile - reads file and prints it to STDOUT
* @filename: pointer to the file.
* @letters: number of bytes to print.
* Return: the number of bytes printed.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t numOfBytes;

	if (!filename)
		return (0);
	
	FILE *file;
	file = fopen(filename, "r");
	if (!file)
		return (0);

	fclose(file);
}
