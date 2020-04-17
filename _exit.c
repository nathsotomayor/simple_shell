#include "holberton.h"
/**
 * e_xit - Fuction that return a value especific of exit
 * @line: Input buffer
 * @status: Actual value of status process
 * @av: Name of the program
 * @count: Counter
 *
 * Return: Value of exit return
 */
int e_xit(char *line, int status, char *av, int count)
{
	char *args[3], *tmp = NULL, *token = NULL, msg[100];
	char a = 'a', z = 'z', upper_a = 'A', upper_z = 'Z';
	char chr = '\0', *argum = NULL;
	int ret = 0, i = 0;

	tmp = _strdup(line);
	free(line);
	token = strtok(tmp, " \t\n\r");
	for (i = 0; token != NULL; i++)
	{
		args[i] = token;
		token = strtok(NULL, " \t\n\r");
	}
	args[i] = NULL;
	if (args[1] == NULL)
	{
		free(tmp);
		return (status);
	}
	argum = _strdup(args[1]);
	if (argum)
		chr = *args[1];
	if ((chr >= a && chr <= z) ||
			(chr >= upper_a && chr <= upper_z) || (_atoi(argum)) < 0)
	{
		sprintf(msg, "%s: %d: exit: Illegal number: %s\n", av, count, args[1]);
		write(2, msg, _strlen(msg));
		free(tmp), free(argum);
		return (2);
	}
	if (argum)
	{
		ret = _atoi(args[1]);
		free(tmp);
		free(argum);
		return (ret);
	}
	free(argum);
	free(tmp);
	return (status);
}
/**
 * _atoi - Function that convert strin to int
 * @arr: String to convert to int
 *
 * Return: Value of converted number
 */
int _atoi(char *arr)
{
	int i = 0, convert = 0;

	for (i = 0; arr[i] != '\0'; ++i)
	{
		convert = convert * 10 + arr[i] - '0';
	}

	return (convert);
}
