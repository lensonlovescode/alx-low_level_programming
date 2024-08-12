#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: The name of the text file.
 * @letters: The number of letters to read and print.
 * Return: The actual number of letters read and printed.
 * Returns 0 on failure or invalid inputs.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int filedescriptor, i;
	int bytesread;
	char str[1024];

	if (filename == NULL)
	{
		return (0);
	}

	filedescriptor = open(filename, O_RDONLY);

	if (filedescriptor == -1)
	{
		perror("Error opening the file");
		return (0);
	}

	bytesread = read(filedescriptor, str, letters);

	if (bytesread == -1)
	{
		return (0);
	}

	str[bytesread] = '\0';

	for (i = 0; i < bytesread; i++)
	{
		_putchar(str[i]);
	}

	close(filedescriptor);

	return (bytesread);
}

