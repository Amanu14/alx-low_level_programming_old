#include "main.h"

/**
 * _strcat - appends the src string to the dest string,
 * @dest:the first string
 * @src:the second string
 * Return: no return.
 */

char *_strcat(char *dest, char *src)
{
int len1 = 0, len2 = 0;

while (*(dest + len1) != '\0')
{
len1++;
}

while (len2 >= 0)
{
*(dest + len1) = *(src + len2);
if (*(src + len2) == '\0')
break;
len1++;
len2++;
}
return (dest);
}
