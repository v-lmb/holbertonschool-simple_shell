#include "main.h"

/**
 * main - simple shell 0.1
 * @ac: buffer of string
 * @av: nb of elements
 * @environ: environnement
 * Return: 0 success
 */

int main(int ac, char **av, char **environ)
{
	char *input = NULL;
	size_t taille = 0;
	ssize_t line;
	int interactive;
	char **args;

	(void) ac;
	interactive = isatty(STDIN_FILENO);

	while (1)
	{
		if (interactive)
		{
			write(STDOUT_FILENO, "$ ", 2);
		}

		line = getline(&input, &taille, stdin);

		if (line == -1)
		{
			if (interactive)
			{
				write(STDOUT_FILENO, "\n", 1);
			}
			break;
		}

		input[line - 1] = '\0';
		if (input[0] == '\0')
		{
			continue;
		}

		args = split(input);
		if (args == NULL || args[0] == NULL)
		{
			free(args);
			continue;
		}

		execute_command(args, av, environ);
		free(args);
	}

	free(input);
	return (0);
}
