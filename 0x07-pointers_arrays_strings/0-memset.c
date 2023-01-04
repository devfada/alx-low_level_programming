#include "main.h"
/**
 * _memset - fills memory with a constant type
 * @s: source string
 * @b: the constant byte for filling
 * @n: length of buffer
 * Return: new string
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int a = 0;
while (a < n) 
{
*(s + a) = b;
a++;
}
return(s);
}
