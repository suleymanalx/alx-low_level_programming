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
int digit;
char letter;
for (digit = 0; digit <= 9; digit++)
{
putchar(digit);
}
for (letter = 'a'; letter <= 'f'; letter++)
{
putchar(letter);
}
putchar('\n');

return (0);
}
