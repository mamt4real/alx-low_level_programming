#include "_putchar.c"

/**
* main - prints _putchar
* Return: 0
*/

int main(void)
{
	char *str = "_putchar";

	for (int i = 0; i < 8; i++)
		_putchar(str[i]);
	_putchar('\n');
}
