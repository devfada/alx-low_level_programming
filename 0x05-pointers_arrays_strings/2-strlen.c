#include "main.h"
/**
 *_strlen- function to return length
 *Return: length
 *
 */
int _strlen(char *s)
{
int length=0;
while (*s != '\0')
{
length++;
s++;
}
return length;
}
