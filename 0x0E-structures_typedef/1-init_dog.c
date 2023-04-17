#include "dog.h"

/**
 * init_dog - initialize dog struct
 * @d: input pointer dog struct
 * @name: input dog name
 * @age: input dog age
 * @owner: input dog owner
 * Code by - yusifhuseini
 * Return: void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		/*d->name = name;*/
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
