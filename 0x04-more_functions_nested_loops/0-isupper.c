#include "holberton.h"
/**
* _isupper - checks for alphabetic character.
* @c: print lowercase
* Return: (0)
*/
int _isupper(int c);
{
if ((c < 'z' && c > 'a') || (c < 'Z' && c > 'A'))
{
return (1);
}
else
{
return (0);
}
