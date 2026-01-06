#include "main.h"

/**
* get_path - cherche PATH
* @envp: environnement
* Return: valeur de PATH
*/

char *get_path(char **envp)
{
	int i = 0;
	int compare_string;

	if (envp[i] == NULL)
		return (NULL);

	while (envp[i] != NULL)
	{
		compare_string = strncmp(envp[i], "PATH=", 5);

		if (compare_string == 0)
		return (envp[i] + 5);

		i++;
	}

	if (envp[i] == NULL)
		return (NULL);
	return (NULL);
}
