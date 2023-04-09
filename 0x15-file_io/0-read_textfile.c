#include "main.h"
#include <stdio.h>

/**
 * read_textfile - This function reads a text file and prints
 * it to the POSIX standard output
 * @filename: This is the file pointer
 * @letters: This is the number of characters to be read and printed out
 * Return: This returns the actual number of letters it could read and print
 */
size_t read_textfile(const char *filename, size_t letters)
{
	FILE *fptr;
	char holder;
	size_t count = 0;

	if (filename == NULL)
	{
		return (0);
	}

	fptr = fopen(filename, "r");
	if (fptr == NULL)
	{
		return (0);
	}

	while ((holder = getc(fptr)) != EOF)
	{
		if (count == letters)
		{
			break;
		}
		putc(holder, stdout);
		count++;
	}
	if (count > letters)
	{
		return (0);
	}

	fclose(fptr);

	return (count);
}
