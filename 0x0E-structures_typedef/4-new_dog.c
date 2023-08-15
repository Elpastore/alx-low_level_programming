#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - function that gives the lenght of a string
 * @s: the string
 * Return: the lenght
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{

	}
	return (len);
}
/**
 * _strcpy -function that cpy a string
 * @s1: string to be cpy
 * @s2: cpy of s1
 * Return: pointer
 */
char *_strcpy(char *s2, char *s1)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		s2[i] = s1[i];
	}
	s2[i] = '\0';

	return (s2);
}
/**
 * new_dog -function that creates a new dog.
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *cpy_name, *cpy_owner;
	int len_name, len_owner;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	len_name = _strlen(name);
	len_owner = _strlen(owner);

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	cpy_name = malloc((len_name + 1) * sizeof(char));
	if (cpy_name == NULL)
	{
		free(cpy_name);
		free(new_dog);
		return (NULL);
	}
	cpy_owner = malloc((len_owner + 1) * sizeof(char));

	new_dog->name = _strcpy(cpy_name, name);
	new_dog->age = age;
	new_dog->owner = _strcpy(cpy_owner, owner);

	return (new_dog);
}
