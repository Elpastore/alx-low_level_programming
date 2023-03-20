#include "dog.h"
#include <stdlib.h>
/**
 * lenght_string -function that compute the lenght of a given string
 * @s: the given string
 * Return: the lenght of the string
 */

int lenght_string(char *s)
{
	int leng;

	for (leng = 0; s[leng] != '\0'; leng++)
	{
	}
	return (leng);
}
/**
 * copy_string -function that copy a string
 * @s1: string to be copied
 * @s2: copy of s1
 * Return: the copy of s1
 */
char *copy_string(char *s2, char *s1)
{
	int a;

	for (a = 0; s1[a] != '\0'; a++)
		s2[a] = s1[a];
	s2[a] = '\0';
	return (s2);
}
/**
 * new_dog - function that creates a new dog.
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 * Return: the new structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *cp_name, *cp_owner;
	dog_t *nwdog;

	if (name == NULL || owner == NULL)
		return (NULL);

	nwdog = malloc(sizeof(dog_t));
	if (nwdog == NULL)
		return (NULL);

	cp_name = malloc((lenght_string(name) + 1) * sizeof(char));
	if (cp_name == NULL)
	{
		free(nwdog);
		return (NULL);
	}

	cp_owner = malloc((lenght_string(owner) + 1) * sizeof(char));
	if (cp_owner == NULL)
	{
		free(cp_name);
		free(nwdog);
		return (NULL);
	}

	nwdog->name = copy_string(cp_name, name);
	nwdog->age = age;
	nwdog->owner = copy_string(cp_owner, owner);

	return (nwdog);
}
