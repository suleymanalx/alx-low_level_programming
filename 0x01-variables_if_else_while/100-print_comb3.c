#include <stdio.h>

/**
 * main - Main Function
 * void - main function does not accept any parameter
 *
 * Description: prints out digits on consule
 * Return: main returns 0 at successful compeletion
 */

int main(void)
{
int i, j;
for (i = 48; i < 57; i++)
{
for (j = i + 1; j < 58; j++)
{
putchar(i);
putchar(j);
if(i != 8)
putchar(', ');
}
}
putchar('\n');

return (0);
}
