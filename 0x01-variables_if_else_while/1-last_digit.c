#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -Main function
 * void - main does not accept parameter
 *
 * Description: display the last digit of number
 * Return: return 0 for successful termination
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
int ln = n % 10;
if (ln > 5)
printf("Last digit of %d is %d and is greater than 5", n, ln);
else if (ln == 0)
printf("Last digit of %d is %d and is 0", n, ln);
else
printf("Last digit of %d is %d and is less than 5", n, ln);
return (0);
}