#include "main.h"

/**
 * execute_command - commande in child process
 * @args: command
 * @av: argument
 * @environ: environnement
 * Return: void
 */

void execute_command(char **args, char **av, char **environ)
{
	pid_t child_pid;
	char *command_path;

	command_path = find_command_in_path(args[0], environ);
	if (!command_path)
	{
		return;
	}

	child_pid = fork();
	if (child_pid == -1)
	{
		perror(av[0]);
		free(command_path);
		return;
	}

	if (child_pid == 0)
	{
		if (execve(command_path, args, environ) == -1)
		{
			fprintf(stderr, "%s: No such file or directory\n", command_path);
			free(command_path);
			exit(127);
		}
	}
	else
	{
		wait(NULL);
		free(command_path);
	}
}
