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

	child_pid = fork();
		if (child_pid == -1)
		{
			perror(av[0]);
			return;
		}

		if (child_pid == 0)
		{

			if (execve(args[0], args, environ) == -1)
			{
				fprintf(stderr, "%s: No such file or directory\n", av[0]);
				exit(127);
			}
		}
		else
		{
			wait(NULL);
		}
}
