#ifndef DOG_H
#define DOG_H

/**
 * struct dog - the dog details
 * @name: the dogs name
 * @age: the dogs age
 * @owner: the dogs owner
 *
 * Description: this one now you can check the code
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
