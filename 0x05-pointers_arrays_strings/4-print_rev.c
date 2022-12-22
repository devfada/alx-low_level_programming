#include<stdio.h>
#include<string.h>
/**
 *printrev- fuction that reverses string 
 *
 * Return: reversed string
 */
void rev_string(char *s)
{
int len = strlen(s);
int i;
for (i = 0; i < len / 2; i++)
{
char temp = s[i];
s[i] = s[len - i - 1];
s[len - i - 1] = temp;
}
}

int main(void)
{
char a[] = "hello";
rev_string(a);
printf("'a': %s\n", a);
return(0);
}
