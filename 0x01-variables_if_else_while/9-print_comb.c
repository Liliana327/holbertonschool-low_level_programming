#include <stdio.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int m;
for (m = 48 ; m <= 57 ; m++)
{
putchar (m);
if (m == 57)
{
continue;
}
else
{
putchar(44);
putchar(32);
}
}
putchar('\n');
return (0);
}
