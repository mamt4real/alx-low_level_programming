#include "main."

/**
 * my_exit - exit a programme with mesaage
 * @type: type of exit
 * @s: additional string to print
 */
void my_exit(int type, char *s)
{
	char **types = {
		"Usage: cp file_from file_to",
		"Error: Can't read from file ",
		"Error: Can't write to file "
	}
	dprintf(2, types[type]);
	dprintf(2, "%s\n",s);
	exit(97 + type);
}

/**
 * main - entry point
 *
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0 succes
 */
int main(int argc, char **argv)
{
	int fd1, fd2, count;
	char buff[1024];

	if (argc != 3)
		my_exit(0, "");
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
		my_exit(1, argv[1]);
	fd2 = open(argv[2], O_WRONLY | O_CREAT, 0664);
	if (fd2 == -1)
	{
		close(fd1);
		my_exit(2, argv[2]);
	}

	return (0);
}
