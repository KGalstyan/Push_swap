#include "push_swap.h"

int is_digit(char h)
{
    return(h >= '0' && h <= '9');
}

int sign(char h)
{
    return(h =='+' || h == '-');
}
void free_matrix(char **split_str)
{
    int i = 0;

    while (split_str[i])
    {
        free(split_str[i]);
        i++;
    }
    free(split_str);
}

static int arg_is_empty(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    if (i == 0)
    {
        printf("IS EMPTY");
        return (0);
    }
    return (1);
}

int arg_checker(char **av)
{
    int i = 1;
    int j;
    int len = 0;
    while(av[i])
    {
        if(!arg_is_empty(av[i]))
            return(0);
        j = 0;
        while(av[i][j] != '\0')
        {
            if(((is_digit(av[i][j])) || ((sign(av[i][j])) && (is_digit(av[i][j+1])))) || (av[i][j] == ' '))
            {
                j++;
                len++;
            }
            else
                return(0);
        }
        len++;
        i++;
    }
    return(len);
}

