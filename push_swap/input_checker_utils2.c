#include "push_swap.h"

char *make_char_str(char **av, int len)
{
    int n = 0;
    int i = 1;
    int j;
    char *str;

    str = (char *)malloc(sizeof(char) * len + 1);
    str[len] = '\0';
    while(av[i])
    {
        j = 0;
        while(av[i][j])
        {
            str[n] = av[i][j];
            j++;
            n++;
        }
        str[n] = ' ';
        n++;
        i++;
    }
    return(str);
}

static int correct_len(char *str)
{
    int i = 0;
    int len = 0;
    if(sign(str[i]))
        i++;
    while(str[i])
    {
        i++;
        len++;
    }
    if(len > 10)
        return(0);
    return(1);
}
static int correct_num(char *str)
{
    int i = 0;
    if(sign(str[i]))
        i++;
    while(str[i])
    {
        if(sign(str[i]))
            return(0);
        i++;
    }
    return(1);
}

int str_with_checker(char *str)
{
    int i;
    char **split_str;

    i = 0;
    split_str = ft_split(str, ' ');
    while(split_str[i])
    {
        if(!correct_len(split_str[i]))
        {
            free_matrix(split_str);
            return(0);
        }
        if(!correct_num(split_str[i]))
        {
            free_matrix(split_str);
            return(0);
        }
        i++;
    }
    free_matrix(split_str);
    return(i);
}

