#include "main.h"
/**
 *_strchar - locates a char in the string
 *@s: string
 *@c: character to search
 *Return: Pointer to the first occurence of the char c
 */
char *_strchar(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return(s);
}
++s;
}
if (*s == c)
{
return(s);
}
return('\0');
}
