#include "holberton.h"
/**
* _islower - checks for lowercase character
* @c: print lowercase
* Return: (0)
*/
int _islower(int c)
{
if (c <= 'z' && c >= 'a')
{
return (1);
}
else
{
return (0);
}
}
