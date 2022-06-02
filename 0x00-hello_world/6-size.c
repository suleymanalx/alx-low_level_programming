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
printf("Size of a char: %li bytes(s)\n", sizeof(char));
printf("Size of an int: %li bytes(s)\n", sizeof(int));
printf("Size of a long int: %li bytes(s)\n", sizeof(long int));
printf("Size of a long long int: %li bytes(s)\n", sizeof(long long int));
printf("Size of a float: %li bytes(s)\n", sizeof(float));

return (0);
}
