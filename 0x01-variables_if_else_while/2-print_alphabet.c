#include <stdio.h>

/**
 * main - Main Function
 * void - main function does not accept any parameter
 *
 * Description: prints out characters in small latter
 * Return: main returns 0 at successful compeletion
 */

int main(void)
{
int i = 0;
while (i < 26)
{
putchar (97 + i);
}
putchar ('\n');

return (0);
}
