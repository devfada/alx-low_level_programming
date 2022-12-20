#include<stdio.h>
#include "main.h"
/**
 *reset_to_98 - function does not modify p 
 *@int * n: a pointer variable
 *Return: nothing
 */
void reset_to_98(int *n)
{
*n = 98;
}
/**
 *main - parameters are passed by value
 *
 *Return: Always 0
 */
int main(void)
{
int x = 402;
putchar("x=%d\n", x);
reset_to_98(&x);
putchar("Value of x is:%d\n", x);
return(0);
}
