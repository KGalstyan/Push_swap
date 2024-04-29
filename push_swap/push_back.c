#include "push_swap.h"

static int get_max_index(t_stack *stack_b)
{
    t_stack *tmp;
    int max_index;
    int value;
    int i;

    i = 0;
    max_index = 0;
    tmp = stack_b;
    value = tmp->value;
    while(tmp != NULL)
    {
        if(tmp->value > value)
        {
            value = tmp->value;
            max_index = i;
        }
        tmp = tmp->next;
        i++;
    }
    return(max_index);
}

static void sort_in_stack_b(t_stack **stack_b)
{
    int len;
    int max_index;

    max_index = get_min_index(*stack_b);
    len = ft_lstsize(*stack_b);    
    if((max_index) <= len/2)
    {
        while(max_index > 0)
        {
            do_rb(stack_b);
            max_index--;
        }
    }
    else
    {
        while(len > max_index + 1 && max_index != 0)
        {
            do_rrb(stack_b);
            max_index++;
        }
    }
}

void push_back(t_stack **stack_a, t_stack **stack_b, int len)
{
    int max_index;

    while(len > 0)
    {
        max_index = get_max_index(*stack_b);
        sort_in_stack_b(stack_b);
        do_pa(stack_a, stack_b);
        len--;
    }
}
