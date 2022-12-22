#include "main.h"

/**
 * _strcat - appends the src string to the dest string,
 * @dest:the first string
 * @src:the second string
 * @n:number of characters
 * Return: no return.
 */

char *_strncat(char *dest, char *src, int n)
{
int len1 = 0, len2 = 0;

while (*(dest + len1) != '\0')
{
len1++;
}

while (len2 < n)
{
*(dest + len1) = *(src + len2);
if (*(src + len2) == '\0')
break;
len1++;
len2++;
}
return (dest);
}