#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 *new_dog - Initializes a variable of type struct dog.
 * Return: dog_t
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
int len_name, len_owner, i;
len_name = strlen(name);
len_owner = strlen(owner);
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL || !name || !owner)
{
free(new_dog);
return (NULL);
}
new_dog->name = malloc(len_name + 1);
new_dog->owner = malloc(len_owner + 1);
if (!new_dog->name || !new_dog->owner)
{
free(new_dog->owner);
free(new_dog->name);
free(new_dog);
return (NULL);
}
for (i = 0; name[i]; i++)
{
new_dog->name[i] = name[i];
}
new_dog->name[i] = '\0';
new_dog->age = age;
for (i = 0; owner[i]; i++)
{
new_dog->owner[i] = owner[i];
}
new_dog->owner[i] = '\0';
return (new_dog);
}
