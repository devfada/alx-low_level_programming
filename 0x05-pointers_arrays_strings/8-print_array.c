#include "main.h"
/**
 *print_array- function that prints array
 *
 *Return: array
 */
void print_array(int *a, int n) {
for (int i = 0; i < n; i++) {
if (i < n - 1) {
printf("%d, ", a[i]);
} else 
{
printf("%d", a[i]);
}
}
putchar('\n');
}
