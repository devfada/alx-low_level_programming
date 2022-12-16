#include "main.h"
/**
 *print_sign-print the sign
 *
 *Return: 1, 0, -1
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar("+, %d", 1);
}
else if (n == 0)
{
_putchar("0, %d", 0);
}
else
_putchar("-, %d", -1);
}
