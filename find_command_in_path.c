#include "main.h"

/**
 * find_command_in_path - pointer to find a command in path
 * @command: command
 * @environ: environnement
 * Return: path of a command
 */

char *find_command_in_path(char *command, char **environ)
{
	char *value_path = NULL;
	char *path = NULL;
	char *path_copy = NULL;
	char *directory = NULL;

	if (access(command, X_OK) == 0)
	{
		return (strdup(command));
	}

	path = get_path(environ);
	if (path == NULL)
		return (NULL);

	path_copy = strdup(path);
	if (!path_copy)
	{
		return (NULL);
	}

	directory = strtok(path_copy, ":");
	while (directory)
	{
		value_path = build_path(directory, command);
		if (value_path && access(value_path, X_OK) == 0)
		{
			free(path_copy);
			return (value_path);
		}
		free(value_path);
		directory = strtok(NULL, ":");
	}
	free(path_copy);
	return (NULL);
}
