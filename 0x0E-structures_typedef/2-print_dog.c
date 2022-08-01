#include "dog.h"
#include<stdio.h>

/**
 * print_dog - prints a dog
 * @d: dog pointer
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;
	printf("Name: %s\n", d->name ? d->name
			: "(nil)");
	if (d->age)
		printf("Age: %f\n", d->age);
	else
		printf("Age: (nil)\n");

	printf("Owner: %s\n", d->owner ? d->owner
			: "(nil)");
}
