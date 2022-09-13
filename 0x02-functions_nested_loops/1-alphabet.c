#include "header.h"
/**
 * print_alphabet -  prints the  alphabet in lowercase, followed by a new line
 */
void print_alphabet(void)
{
	int ch = 'a';

	while (ch <= 'z')
{
		_putchar(ch);
		ch++;
}
		_putchar('\n');
}
