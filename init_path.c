#include "main.h"
/**
  * find_path - Finds the PATH variable in the environment variables
  * @var: Array of environment variables
  * @i: Pointer to the current index of the environment variables array
  * @j: Pointer to the current index of the PATH variable
  */
void find_path(char **var, int *i, int *j)
{
	while (var[*i])
	{
		while (var[*i][*j])
		{
			if (var[*i][*j] == PATH[*j])
			{
				if (var[*i][*j] == '=')
					return;
				(*j)++;
			}
			else
				break;
		}
		(*i)++;
		*j = 0;
	}
	*i = 0;
	*j = 0;
}
/**
  * get_path - Extracts the PATH variable from the environment variables
  * @env: Array of environment variables
  * Return: Pointer to an array of directories in the PATH, or NULL if not found
  */
char **get_path(char **env)
{
	int i = 0, j = 0;
	char **array;

	find_path(env, &i, &j);
	if (i == 0 && j == 0)
	{
		return (NULL);
	}
	j++;
	array = _strtok(env[i] + j, ':');
	if (!array)
	{
		free(array);
		return (NULL);
	}
	return (array);
}
/**
 * free_path - Frees the memory allocated for the array of directories in PATH
 */
void free_path(void)
{
	int i = 0;

	if (!path_var)
		return;
	while (path_var[i])
		free(path_var[i++]);
	free(path_var);
}
