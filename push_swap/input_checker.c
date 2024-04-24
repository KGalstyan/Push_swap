#include "push_swap.h"

int int_string_len(char *str)
{
    int i = 0;
    char **split_str;

    split_str = ft_split(str, ' ');
    while(split_str[i])
    {
        if((ft_atoi(split_str[i]) > 2147483647) || (ft_atoi(split_str[i]) < -2147483648))
        {
            free_matrix(split_str);
            return(0);
        }
        i++;
    }
    free_matrix(split_str);
    return(i);
}
int *make_int_string(char *str)
{
    int i = 0;
    int n = 0;
    int *arr;
    char **split_str;

    split_str = ft_split(str, ' ');
    while(split_str[i])
        i++;
    arr = (int *)malloc(sizeof(int) * i);
    if(!arr)
        return(0);
    i = 0;
    while(split_str[i])
    {
        arr[n] = ft_atoi(split_str[i]);
        i++;
        n++;
    }
    free_matrix(split_str);
    return(arr);
}

static int have_dublicates(int *arr, int len)
{
    int i = 0;
    int p = 0;
    while(i < len)
    {
        p = i + 1;
        while(p < len)
        {
            if(arr[i] == arr[p])
            {
                printf("have dub");
                return(0);
            }
            p++;
        }
        i++;
    }
    return(1);
}

int correct_input(char **argv)
{
    int len = 0;
    char *str;
    int *int_arr;
    if(!arg_checker(argv))
        return(0);
    else
        len = arg_checker(argv);
    str = make_char_str(argv, len);
    if(!str_with_checker(str))
    {
        free(str);
        return(0);
    }
    len = int_string_len(str);
    int_arr = make_int_string(str);
    free(str);
    if(!have_dublicates(int_arr, len))
    {
        free(int_arr);
        return(0);
    }
    free(int_arr);
    return(len);
}

