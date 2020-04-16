#include "holberton.h"
/**
 * e_xit - Fuction that return a value especific of exit
 * @line: Input buffer
 * @status: Actual value of status process
 *
 * Return: Value of exit return
 */
int e_xit(char *line, int status)
{
	char *args[3], *tmp, *token;
	int ret, i;

	tmp = _strdup(line);
	free(line);
	token = strtok(tmp, " \t\n\r");
	for (i = 0; token != NULL; i++)
	{
		args[i] = token;
		token = strtok(NULL, " \t\n\r");
	}
	if (args[1])
	{
		ret = _atoi(args[1]);
		free(tmp);
		return (ret);
	}

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
	int i, convert = 0;

	for (i = 0; arr[i] != '\0'; ++i)
	{
		convert = convert * 10 + arr[i] - '0';
	}

	return (convert);
}
