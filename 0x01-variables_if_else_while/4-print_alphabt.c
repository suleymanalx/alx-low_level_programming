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
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter == 'q' || letter == 'e')
continue;
putchar (letter);
}
putchar ('\n');

return (0);
}
