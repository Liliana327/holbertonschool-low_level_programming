#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int dy;
srand(time(0));
n = rand() - RAND_MAX / 2;
dy = n % 10;
if (dy < 6 && dy != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, dy);
}
else if (dy == 0)
{
printf("Last digit of %d is %d and is 0\n", n, dy);
}
else
{
printf("Last digit of %d is %d and is greater than 5\n", n, dy);
}
return (0);
}
