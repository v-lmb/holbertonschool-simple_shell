#include "main.h"

/**
 * split - split a fabulous line
 * @input: line to split
 * Return: array of arguments
 */

char **split(char *input)
{
	char **args = malloc(sizeof(char *) * 64);
	char *token;
	int i = 0;

	if (args == NULL)
	{
		return (NULL);
	}

	token = strtok(input, " \t\n");
	while (token)
	{
		args[i++] = token;
		token = strtok(NULL, " \t\n");
	}
	args[i] = NULL;
	return (args);
}
