#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int c;
int m;
for (c = 48; c <= 57; c++)
{
for (m = 48; m <= 57; m++)
{
putchar(c);
putchar(m);
if (c < 57 || m < 57)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
