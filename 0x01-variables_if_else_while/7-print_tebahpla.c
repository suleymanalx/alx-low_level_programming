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
char letter;
for (letter = 'z'; letter < 'a'; letter--)
{
putchar(letter);
}
putchar('\n');

return (0);
}
