#include "dog.h"

/**
 * copy - to copy string
 * @str: new string
 * @i: length of string s
 * @s: to copy from
 *
 * Return: str
 */

char *copy(char *str, int i, char *s)
{
	int l;

	for (l = 0; l < i; l++)
	{
		str[l] =  s[l];
	}

	str[l] = '\0';

	return (str);
}
/**
 * new_dog - a function that creates a new dog.
 *
 * @name: pointer to the name of dog string
 * @age: age variable
 * @owner: point to the name of owner stringi
 *
 * Return: the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	int i, j;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	my_dog = malloc(sizeof(*my_dog));
	if (my_dog == NULL || !(name) || !(owner))
	{
		free(my_dog);
		return (NULL);
	}

	for (i = 0; *name++; i++)
		;
	for (j = 0; *owner++; j++)
		;

	my_dog->name = malloc((i + 1) * sizeof(char));
	my_dog->owner = malloc((j + 1) * sizeof(char));
	if (my_dog->name == NULL || my_dog->owner == NULL)
	{
		free(my_dog->name);
		free(my_dog->owner);
		free(my_dog);
		return (NULL);
	}

	copy(my_dog->name, i, name);

	my_dog->age = age;

	copy(my_dog->owner, j, owner);

	return (my_dog);
}
