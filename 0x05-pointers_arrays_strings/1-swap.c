#include<stdio.h>
#include "main.h"
/**
 *reset_to_98 - function does not modify p 
 *@int * n: a pointer variable
 *Return: nothing
 */
void reset_to_98(int *n)
{
n = &n;
*n = 98;
}
/**
 *main - parameters are passed by value
 *
 *Return: Always 0
 */
int main(void)
{
int n = 402;
_putchar("n=%d\n", n)
reset_to_98(n);
_putchar("Value of n is:%d\n", n);
return(0);
}

