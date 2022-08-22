#include "main.h"

/**
 * read_textfile - reads and prints content of a file
 * @filename: file name
 * @letters: number of letters to print
 *
 * Return: Number of chars printed or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, retval;
	char *buff;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(letters);
	if (!buff)
		return (0);
	read(fd, buff, letters);
	retval = write(1, buff, letters);
	free(buff);
	close(fd);
	if (retval == -1 || retval < ((int)letters))
		return (0);
	return (retval);
}
