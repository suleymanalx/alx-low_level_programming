#include "main.h"
/**
 * _islower -  Function
 * char - _islower function accepts char as parameter
 * @c : accepts character c as parameter
 * Description: returns 0 for lowercase character 1 for other
 * Return: _islower returns 0 or 1 based on the condition
 */
int _islower(int c)
{
if (c < 'a')
return (0);
else
return (1);
}
