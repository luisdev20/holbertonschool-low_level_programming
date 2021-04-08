#include "holberton.h"

char **tokenize(int token_count, vars_t vars, const char *delimiter)
{
        int i;
        char **buffer;
        char *token;
        char *line_cp;

        line_cp = _strdup(vars.buffer);
        buffer = malloc(sizeof(char *) * (token_count + 1));
        if (buffer == NULL)
                return (NULL);
        token = strtok(line_cp, delimiter);
        for (i = 0; token != NULL; i++)
        {
                buffer [i] = _strdup(token);
                token = strtok(NULL, delimiter);
        }
        buffer[i] = NULL;
        free(line_cp);
        return (buffer);
}
