#include<stdio.h>
/**
 *printrev- fuction that reverses string 
 *
 * Return: reversed string
 */
void print_rev(char *s)
{
int i;
for(i = strlen(s)-1; i>=0; i--)
putchar(s[i]);
putchar('\n');
}
