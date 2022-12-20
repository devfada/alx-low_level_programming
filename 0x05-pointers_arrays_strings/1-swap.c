#include "main.h"
/**
 *swap_int- function to swap values
 *
 *Return: nothing
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
/**
 *main- 
 *
 *Return: Always 0
 *
 */
int main(void)
{
int x = 98;
int y = 42;
swap_int(&x, &y);
return(0);
}
