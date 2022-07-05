#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
void print_alphabet(void);
void print_alphabet_x10(void);
int _isalpha(int c);
int _islower(int c);
int print_sign(int n);
int _abs(int);
int print_last_digit(int);
void jack_bauer(void);
void times_table(void);
int add(int, int);
void print_to_98(int n);
void printNum(int);
void print_times_table(int);

#endif /* MAIN_H */


/**
 * printNum - prints an integer character wise
 * @n: the number to print
 */

void printNum(int n)
{
	if (n < 0)
	{
		_putchar('-');
		printNum(-n);
		return;
	}
	if (n < 10)
	{
		_putchar(n + '0');
		return;
	}
	else
	{
		printNum(n / 10);
		_putchar((n % 10) + '0');
	}
}
