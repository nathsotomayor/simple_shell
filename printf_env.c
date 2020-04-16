#include "holberton.h"
/**
 * print_env - print variable global envirionment
 * @env: variable global envirionment system
 * Return: estatus_exit value;
 **/

int print_env(char **env)
{
	int i = 0;

	for (i = 0; env[i] != NULL; i++)
	{
		write(STDOUT_FILENO, env[i], _strlen(env[i]));
		write(STDOUT_FILENO, "\n", 1);
	}
	return (EXIT_SUCCESS);
}
