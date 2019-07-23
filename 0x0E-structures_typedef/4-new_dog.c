#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/* *new_dog - function that creates a new dog 
 * @name: nombre
 * @age: edad
 * @owner: propietario
 * Return: (0)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int length, length2, m;
	dog_t *Richard;

	length = 0;
	length2 = 0;

	while (name[length++])
		continue;
	while (owner[length2++])
		continue;
	Richard = malloc(sizeof(dog_t));
	if (Richard == NULL)
	{
		return (NULL);
	}

	Richard->name = malloc((length + 1) * sizeof(char));
	if (Richard->name == NULL)
	{
		free(Richard->name);
		free(Richard);
		return (NULL);
	}
	for (m = 0; m < length; m++)
		Richard->name[m] = name[m];
	Richard->age = age;
	Richard->owner = malloc((length2 + 1) * sizeof(char));
	if (Richard->owner == NULL)
	{
		free(Richard->name);
		free(Richard->owner);
		free(Richard);
		return (NULL);
	}
	for (m = 0; m < length2; m++)
		Richard->owner[m] = owner[m];
	return (Richard);
}
