#include "main.h"

/**
 * execute_command - commande in child process
 * @input: command
 * @av: argument
 * @environ: environnement
 * Return: void
 */

void execute_command(char *input, char **av, char **environ)
{
	pid_t child_pid;
	char *argv[2];

	child_pid = fork();
		if (child_pid == -1)
		{
			perror(av[0]);
			return;
		}

		if (child_pid == 0)
		{
			argv[0] = input;
			argv[1] = NULL;

			if (execve(input, argv, environ) == -1)
			{
				fprintf(stderr, "%s: No such file or directory\n", av[0]);
				free(input);
				exit(127);
			}
		}
		else
		{
			wait(NULL);
		}
}
