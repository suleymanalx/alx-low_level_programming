#include "main.h"
/**
 * sign -  Function
 * @n - sign function accepts a int parameter
 *
 * Description: prints out +, 0 or - based on the digit value
 * Return: returns 1, 0 or -1 base on the  condition
 */

int print_sign (int n)
{
if (n > 0)
{
_putchar ('+');
return (1);
}
else if (n == 0)
{
_putchar ('0');
return (0);
}
else
{
_putchar ('-');
return (-1);
}
}
