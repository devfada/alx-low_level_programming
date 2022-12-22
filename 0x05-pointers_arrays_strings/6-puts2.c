#include "main.h"
/**
 *puts2- function that prints string characters
 *Return: characters
 */
void puts2(char *str) 
{
for (int i = 0; str[i] != '\0'; i+=2)
{
putchar(str[i]);
}
putchar('\n');
}
