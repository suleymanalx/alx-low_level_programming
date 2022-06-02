#include <stdio.h>
/**
 * main - program starting point
 * void - function main does not accept a value
 * Description: a program displays size of variables
 * Section header:
 * Return: function main returns 0 for successful completion
 */
int main(void)
{
/* Print size of a variable */
printf("size of a char: %d bytes(s)\n", sizeof(char));
printf("size of an int: %d bytes(s)\n", sizeof(int));
printf("size of a long int: %d bytes(s)\n", sizeof(long int));
printf("size of a long long int: %d bytes(s)\n", sizeof(long long int));
printf("size of a float: %d bytes(s)\n", sizeof(float));

return (0);
}
