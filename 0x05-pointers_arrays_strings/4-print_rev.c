#include "main.h"

/**
 * print_rev - prints reversed string.
 * @s: input string.
 * Return: no return.
 */
void print_rev(char *s)
{
int count = 0, x, y;
char *str, temp;

while (count >= 0)
{
if (s[count] == '\0')
break;
count++;
}
str = s;

for (x = 0; x < (count - 1); x++)
{
for (y = x + 1; y > 0; y--)
{
temp = *(str + y);
*(str + y) = *(str + (y - 1));
*(str + (y - 1)) = temp;
}
}
}
