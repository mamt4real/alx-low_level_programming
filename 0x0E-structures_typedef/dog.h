#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog data structure
 * @name: name of the dog
 * @owner: owner's name
 * @age: age of the dog
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */