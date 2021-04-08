#ifndef _SHELL_HOLBERTON_
#define _SHELL_HOLBERTON_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <limits.h>
#include <signal.h>

/**** Estructura con las posibles variables que vamos a usar ****/
/**
 * struct variables - variables
 * @av: command line arguments
  * @buffer: buffer of command
 */
typedef struct variables
{
        char **array_tokens;
        char *buffer;
} vars_t;

/******Some String operations and manipulation******/
char *_strdup(char *strtodup);
int _strcmpr(char *strcmp1, char *strcmp2);
char *_strcat(char *strc1, char *strc2);
ssize_t _puts(char *str);
int str_len(char *str);
void print_str(char *str, int new_line);
int _write_char(char c);
int print_number(int n);
char **tokenize(int token_count, vars_t vars, const char *delimiter);

/**
 * struct builtins - struct for the builtin functions
 * @name: name of builtin command
 * @f: function for corresponding builtin
 */
typedef struct builtins
{
        char *name;
        void (*f)(vars_t *);
} builtins_t;
#endif /* _SHELL_HOLBERTON_ */
