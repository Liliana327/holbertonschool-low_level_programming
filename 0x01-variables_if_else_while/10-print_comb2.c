/**
 * main - Entry point
 * Description: Program to write numbers 00 to 99 with a comma
 * Return: Always 0 (Success)
 */
#include <stdio.h>
int main(void)
{
int c;
int d;
for (c = 48; c <= 57; c++)
{
for (d = 48; d <= 57; d++)
{
putchar(c);
putchar(d);
if (c < 57 || d < 57)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
