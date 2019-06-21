#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;
int m;
int c;
for (a = '0'; a <= '9'; a++)
{
for (m = '0'; m <= '9'; m++)
{
for (c = '0'; c <= '9'; c++)
{
if (a < m && m < c)
{
putchar(a);
putchar(m);
putchar(c);
if (a == '7' && m == '8' && c == '9')
{
;
}
else
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
