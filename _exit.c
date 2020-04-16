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
	int ret = 0, i = 0;

	tmp = _strdup(line);
	free(line);
	token = strtok(tmp, " \t\n\r");
	for (i = 0; i < 3; i++)
	{
		args[i] = token;
		token = strtok(NULL, " \t\n\r");
	}
	if ((*args[1] >= 'a' && *args[1] <= 'z') ||
			(*args[1] >= 'A' && *args[1] <= 'Z') || (_atoi(args[1])) < 0)
	{
		sprintf(msg, "%s: %d: exit: Illegal number: %s\n", av, count, args[1]);
		write(2, msg, _strlen(msg));
		free(tmp);
		return (2);
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
	int i = 0, convert = 0;

	for (i = 0; arr[i] != '\0'; ++i)
	{
		convert = convert * 10 + arr[i] - '0';
	}

	return (convert);
}
