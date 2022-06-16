/**
 * _strcat - character concatination
 * @dest: first character
 * @src: second character
 * Return: returns dest
 * @date 2022-06-16
 * @copyright Copyright (c) 2022
 */
char *_strcat(char *dest, const char *src)
{
int dest_len = strlen(dest);
int n = strlen(src);
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[dest_len + i] = src[i];
}
dest[dest_len + i] = '\0';

return (dest);
}
