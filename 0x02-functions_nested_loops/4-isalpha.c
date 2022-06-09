#include "main.h"
/**
 * _isalpha -  Function
 * char - _isalpha function accepts char as parameter
 * @c : accepts character c as parameter
 * Description: returns 0 for non char 1 for other
 * Return: _isalpha returns 0 or 1 based on the condition
 */
int _isalpha(char c)
{
if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
return (1);
else
return (0);
}
