#include <stdlib.h>
#include "dog.h"

/**
* free_dog - this function frees dogs
* @d: this parameter is a pointer to the dog to free, a dog struct
* Return: Nothing
*/
void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}
