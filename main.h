#ifndef MAIN_H
#define MAIN_H

#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <dirent.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <signal.h>

void execute_command(char **args, char **av, char **environ);
char **split(char *input);
char *get_path(char **envp);
char *build_path(char *directory, char *command);
char *find_command_in_path(char *command, char **environ);
char **split(char *input);

#endif
