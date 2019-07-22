#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - datos de un perro.
 * @name: nombre
 * @age: edad
 * @owner: propietario
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif /* _HOLBERTON_H_ */

