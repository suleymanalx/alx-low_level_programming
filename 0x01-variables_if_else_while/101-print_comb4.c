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
int i, j, k;
for (i = 48; i < 56; i++)
{
for (j = i + 1; j < 57; j++)
{
for (k = j + 1; j < 58; j++)
{
putchar(i);
putchar(j);
putchar(k);
if (j != 57)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');

return (0);
}
