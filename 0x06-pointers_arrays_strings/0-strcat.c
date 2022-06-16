/**
 * _strcat - character concatination
 * @dest: first character
 * @src: second character
 * Return: returns dest
 * @date 2022-06-16
 * @copyright Copyright (c) 2022
 */
#include <stdio.h>
char *_strcat(char *dest, char *src)
{
size_t dest_len = strlen(dest);
size_t n = strlen(src);
size_t i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[dest_len + i] = src[i];
}
dest[dest_len + i] = '\0';

return (dest);
}
