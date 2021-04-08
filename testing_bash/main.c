#include "holberton.h"
#include <signal.h>
#define SHELLNAME "Mishell $ "

void parse_line(vars_t vars, size_t len_buffer, int command_counter, char **av>
char **token_interface(vars_t vars, const char *delimiter, int token_count);
int count_token(vars_t vars, const char *delimiter);

int main(__attribute__((unused)) int ac, char **av)
{
        size_t len_buffer;
        int command_counter = 0;
        vars_t vars = {NULL, NULL};

        signal(SIGINT, SIG_IGN);

        do {
                command_counter ++;
                vars.buffer = NULL;
                len_buffer = 0;
                parse_line(vars, len_buffer, command_counter, av);

        } while (1);

        return (0);
}

void parse_line(vars_t vars, size_t len_buffer, int command_counter, char **av)
{
        int i;
        ssize_t read_len;
        int token_count;
        const char *delimiter = " \t\r\n\a";

        token_count = 0;
        write(STDOUT_FILENO, SHELLNAME, str_len(SHELLNAME));
        read_len = getline(&(vars.buffer), &len_buffer, stdin);
        if (read_len == -1)
        {
                free(vars.buffer);
                print_str("\n", 1);
                exit(1);
        }
        else
        {
                vars.array_tokens = token_interface(vars, delimiter, token_cou>
                if (vars.array_tokens[0] == NULL)
                {
                        free(vars.array_tokens);
                        free(vars.buffer);
                        return;
                }
                i = built_in(vars.array_tokens, vars.buffer);
                if (i == -1)
                        create_child(vars.array_tokens, vars.buffer, command_c>
                for (i = 0; vars.array_tokens[i] != NULL; i++)
                        free(vars.array_tokens[i]);
                free(vars.array_tokens);
                free(vars.buffer);
        }
}

char **token_interface(vars_t vars, const char *delimiter, int token_count)
{
        token_count = count_token(vars, delimiter);
        if (token_count == -1)
        {
                free(vars.buffer);
                return (NULL);
        }
        vars.array_tokens = tokenize(token_count, vars, delimiter);
        if (vars.array_tokens == NULL)
        {
                free(vars.buffer);
                return (NULL);
        }

        return(vars.array_tokens);
}

int count_token(vars_t vars, const char *delimiter)
{
        char *str;
        char *token;
        int i;

        str = _strdup(vars.buffer);
        if (str == NULL)
                return (-1);
        token = strtok(str, delimiter);
        for (i = 0; token != NULL; i++)
                token = strtok(NULL, delimiter);
        free(str);
        return (i);
}
  
