#include "holberton.h"

/**
 * non_interact - This function get command line a through arguments of main.
 * @av: Pointer to strings with all arguments of input in each postiion.
 * Return: void.
 **/
void non_interact(char **av)
{
	char *msg1 = NULL, *msg2 = NULL, *msg3 = NULL;

	msg1 = _strcat((av[0]) + 2,  ": 0: Can't open ");
	msg2 = _strcat(msg1, av[1]);
	free(msg1);
	msg3 = _strcat(msg2, "\n");
	free(msg2);
	write(2, msg3, _strlen(msg3));
	free(msg3);
}
