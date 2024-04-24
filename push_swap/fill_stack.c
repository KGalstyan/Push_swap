#include "push_swap.h"

t_stack *fill_stack(int *num, int len)
{
    int i;
    t_stack *stack_a;
    t_stack *new;

    i = 0;
    stack_a = NULL;
    while(len > i)
    {
        new = ft_lstnew(num[i]);
        ft_lstadd_back(&stack_a, new);
        i++;
    }
    return(stack_a);
}

t_stack *fill_stack_values(char **av)
{
    t_stack *stack_a;
    int len;
    int *num;
    char *str;

    len = arg_checker(av);
    str = make_char_str(av, len);
    len = int_string_len(str);
    num = make_int_string(str);
    free(str);
    stack_a = fill_stack(num, len);
    free(num);
    return(stack_a);
}
