#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int m;
char c;
for (m = '0' ; m <= '9' ; m++)
putchar (m);
for (c = 'a' ; c <= 'f' ; c++)
putchar (c);
putchar ('\n');
return (0);
}
