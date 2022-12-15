#include "main.h"
/**
 * _isalpha-
 *
 * Return- if uppercase or lowercase return 1 otherwise 0
 */
int _isalpha(int c)
{
if (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
