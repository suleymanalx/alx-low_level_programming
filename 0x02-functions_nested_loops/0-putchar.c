#include <unistd.h>
/**
 * _putchar -  Function
 * char - _putchar function accepts char as parameter
 *
 * Description: prints out character on consule using write
 * Return: _putchar returns 0 at successful compeletion
 */
int _putchar(void)
{
return (write(1, "_putchar", 7));
}
