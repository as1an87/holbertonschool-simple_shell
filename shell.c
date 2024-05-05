#include "main.h"
/**
  * main_helper - This function assists the main function by handling user commands.
  * @fcommand: tokenaized user command
  * @status: Indicates whether echoing is active.
  * @buf: User input buffer.
  * Return: 1 if a break is needed, otherwise 0.
  */
int main_helper(char **fcommand, int status, char *buf)
{
	if (fcommand == NULL)
	{
		free(buf), free_path();
		if (status)
			printf("\n");
		return (1);
	}
	else if (!strcmp(fcommand[0], "exit"))
	{
		free(buf), free_path(), free(fcommand);
		return (1);
	}
	return (0);
}
/**
  * main - Entry point of the program
  * @argv: Number of arguments passed to the program
  * @argc: Array of arguments passed to the program
  * @env: Array of environment variables
  * Return: Returns the exit status of the program
  */
int main(int argc, char **argv, char **env)
{
	char **fcommand, *buf, *command;
	int status, lk = 0, r_code = 0;

	(void)argc, path_var = get_path(env);
	while (1)
	{
		status = isatty(STDIN_FILENO), print_prompt(status);
		fcommand = get_command(&buf);
		if (main_helper(fcommand, status, buf))
			break;
		if (!strcmp(fcommand[0], " "))
		{
			free(buf), free(fcommand[0]), free(fcommand);
			continue;
		}
		command = strdup(fcommand[0]);
		if (!strcmp("env", fcommand[0]))
		{
			print_env(), free(buf), free(fcommand), free(command);
			continue;
		}
		fcommand[0] = find_file(fcommand[0], &lk);
		if (!fcommand[0])
		{
			fprintf(stderr, "%s: 1: %s: not found\n", argv[0], command);
			free(buf), free(fcommand), free(command), errno = 0;
			if (!status)
				free_path(), exit(127);
			continue;
		}
		r_code = exec_c(fcommand), free(buf);
		if (lk)
			free(fcommand[0]), lk = 0;
		free(fcommand), free(command);
	}
	return (r_code);
}
