#include "main.h"
/**
 *puts_half- function that prints half string 
 *
 *Return: half string
 *
 */
void puts_half(char *str) {
int length = strlen(str);
int mid = length / 2;
if (length % 2 != 0) {
mid++;
}
for (int i = mid; i < length; i++) {
putchar(str[i]);
}
putchar('\n');
}
