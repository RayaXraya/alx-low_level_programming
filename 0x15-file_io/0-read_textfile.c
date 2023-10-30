#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads then writes to stdout
 * @filename: the file to be written
 * @letters: number of letters to be printed
 * Return: numberof letters written
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fdescrip, rdbytes, wrbytes;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	fdescrip = open(filename, O_RDONLY);
	if (fdescrip == -1)
		return (0);
	
	rdbytes = read(fdescrip, buffer, letters);
	if (rdbytes == -1)
		return (0);
	wrbytes = write(1, buffer, rdbytes);
	if (wrbytes != rdbytes || wrbytes == 1)
		return (0);
	
	free(buffer);
	close(fdescrip);

	return(wrbytes);
}
