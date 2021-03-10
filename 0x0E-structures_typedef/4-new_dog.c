#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - This programm that returns the length of a string.
 * @s: The string to count.
 *
 * Return: return 0.
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * _strcpy - This function copies the string pointed to by src, including the
 * terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: pointer to buffer point.
 * @src: pointer to string point.
 *
 * Return: returning a char.
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (src[i] != '\0')
		i++;
	for (j = 0; j <= i; j++)
		dest[j] = src[j];
	return (dest);
}

/**
 * new_dog - A new struct describing a dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owners name of the dog.
 *
 * Return: returning a dog_t type.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
		return (NULL);

	doggo->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (doggo->name == NULL)
	{
		free(doggo);
		return (NULL);
	}

	doggo->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (doggo->owner == NULL)
	{
		free(doggo->name);
		free(doggo);
		return (NULL);
	}

	doggo->name = _strcpy(doggo->name, name);
	doggo->age = age;
	doggo->owner = _strcpy(doggo->owner, owner);

	return (doggo);
}
