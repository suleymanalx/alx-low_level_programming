#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Main function
 * void - main does not accpet any parameters
 * Description: catagorize random number as positive or negative
 * Return: main function return 0 for successful completion
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
printf("%d is positive\n", n);
else if (n == 0)
printf("%d is zero\n", n);
else
printf("%d is negative\n", n);

return (0);

}
