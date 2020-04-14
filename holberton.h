#ifndef HOLBERTON_H
#define HOLBERTON_H
#define _GNU_SOURCE
#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>

extern char **environ;


/* Shell functions shell_functions.c*/
	void non_interact(char **av);
	int interactive(char *av[], int count_exe, char **env);
	char **split_buffer(char *av, char *delim);
	int create_process(char *av[]);
	char *_getenv(char *name);
	void free_arg(char **arguments);
	void print_env(char **env);
	int child_process(char **args);

/* funcions search_path path_fuctions.c*/
	/*path_node *add_node_end(path_node **head, char *str);
	void convert_path_to_list(path_node **head, char *current_path);*/
	char *validate_file(char *full_path, char *file);
	char *search_path(char *av);
	/*void free_list(path_node **head);*/

	/* Str functions  str_functions.c*/
	char *_strcpy(char *dest, char *src);
	int _strlen(const char *s);
	char *_strcat(char *dest, char *src);
	char *_strdup(char *str);
	int _strcmp(char *s1, char *s2);
	int _strncmp(const char *s1, const char *s2, size_t n);

	char *_strcat2(char *dest, char *src);

	/* Memory allocate functions */
	char *_memset(char *s, char b, unsigned int n);
	void *_calloc(unsigned int nmemb, int size);
	unsigned int lenght_array(char **p);

#endif
