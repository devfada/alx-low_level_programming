#include<stdio.h>
#include<string.h>
/**
 *print_rev - prints a reverse string
 *@s: this is the input string
 */
void print_rev(char *s)
{
int index;
for(index = index - 1; s[index] != '\0'; index--)
{
_putchar(s[index]);
}
_putchar('\n');
}
