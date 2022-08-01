#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a structure that defines dogs.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: the dog owner's name.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */