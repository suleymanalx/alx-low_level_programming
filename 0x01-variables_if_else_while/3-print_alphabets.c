#include <stdio.h>
/**
 * main - Main Function
 * void - main does not accept parameter
 * Description: prints lower and upper letter characters
 * Return: returns 0 for successful compeletion
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar (letter);
}
for (letter = 'A'; letter <= 'Z'; letter++)
{
putchar (letter);
}
putchar ('\n');

return (0);
}
