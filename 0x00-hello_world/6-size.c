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
printf("size of a char: %u bytes(s)", sizeof(char));
printf("size of an int: %u bytes(s)", sizeof(int));
printf("size of a long int: %u bytes(s)", sizeof(long int));
printf("size of a long long int: %u bytes(s)", sizeof(long long int));
printf("size of a float: %u bytes(s)", sizeof(float));

return (0);
}
