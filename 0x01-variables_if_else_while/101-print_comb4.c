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
int p, q, r;
for (p = 0; p <= 97; p++)
{

for (q = p + 1; q <= 98; q++)
{

for (r = q + 1; r <= 99; r++)
{

putchar((p / 10) + '0');
putchar((q / 10) + '0');
putchar((r / 10) + '0');

if (p == 98 && q == 99)
continue;
putchar(',');
putchar(' ');

}
}
}

putchar ('\n');
return (0);
}
