/**
 * _pow_recursion - calculates the exponenent of a function
 * @x: puntero
 * @y: puntero
 * Return: funcion -1 , y > 0
 */
int _pow_recursion(int x, int y)
{
	if (y < -1)
	return (-1);
	if (y == 0)
	return (1);
	if (y <= 1)
	return (x);
	return (x * _pow_recursion(x, y - 1));
}
