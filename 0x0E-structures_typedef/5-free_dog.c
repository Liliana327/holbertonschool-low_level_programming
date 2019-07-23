#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - is function that frees dogs
 * @d: puntero
 * Return: (0)
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
