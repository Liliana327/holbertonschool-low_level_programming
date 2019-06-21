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
for (c = '0'; c <= '9'; c++)
{
for (m = c + 1; m <= '9'; m++)
{
if (c < m)
{
putchar(c);
putchar(m);
if (c == '8' && m == '9')
;
else
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
