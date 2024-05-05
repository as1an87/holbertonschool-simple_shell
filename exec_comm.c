#include "main.h"
/**
  * exec_c - Execute commands
  * @fcommand: Input
  * Return: Return Code
  */
int exec_c(char **fcommand)
{
	pid_t pid;
	int r_code;/*r_code -> Return Code*/

	pid = fork();
	if (pid == 0)
		r_code = execve(fcommand[0], fcommand, environ);
	else
	{
		wait(&r_code);
		return (WEXITSTATUS(r_code));
	}
	return (r_code);
}
