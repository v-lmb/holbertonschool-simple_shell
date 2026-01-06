#include "main.h"

/**
 * build_path - build a path
 * @directory: directory
 * @command: command
 * Return: pointer to a builded path
 */
char *build_path(char *directory, char *command)
{
	char *path;
	int len_directory;
	int len_command;
	int slash;

	len_directory = strlen(directory);
	len_command = strlen(command);

	slash = (directory[len_directory - 1] != '/');
	path = malloc(len_directory + len_command + slash + 1);
	if (!path)
	{
		return (NULL);
	}

	strcpy(path, directory);

	if (slash)
	{
		strcat(path, "/");
	}

	strcat(path, command);
	return (path);
}
