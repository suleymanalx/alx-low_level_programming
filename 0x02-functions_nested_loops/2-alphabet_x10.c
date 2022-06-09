#include "main.h"
/**
 * print_alphabet_x10 -  Function
 * void - print_alphabet_x10 function does not accepts a parameter
 *
 * Description: prints out characters (a-z) on consule 10 times using write
 * Return: print_alphabet_x10 does have a return value
 */
void print_alphabet_x10(void)
{
char i;
int j;
for (j = 0; j < 10; j++)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
}