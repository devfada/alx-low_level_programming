#include<stdio.h>
/**
 *rev_string- function that reverses string
 *
 *Return: reversed string
 */
void rev_string(char *s)
{
int len = strlen(s);
char *left = s;
char *right = s + len - 1;
while (left < right) {
char temp = *left;
*left = *right;
*right = temp;
left++;
right--;
}
}
