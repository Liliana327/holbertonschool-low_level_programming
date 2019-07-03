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
for (c = 0; c <= 99; c++)
{
    for (m = 1; m <= 99; m++)
    {
        putchar(m % c);
        putchar(m / c);
        putchar(' ');
        
        putchar(c % c);
        putchar(c / c);
        putchar(',');
        putchar(' ');
    }
}
putchar('\n');
return (0);
}
