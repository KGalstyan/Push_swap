#include "push_swap.h"

int get_min_index(t_stack *stack_a)
{
    t_stack *tmp;
    int min_index;
    int i = 0;

    tmp = stack_a;
    while(tmp->next != NULL)
    {
        if(tmp->value < tmp->next->value)
            min_index = i;
        i++;
        tmp = tmp->next;
    }
    return(min_index);
}

void sorting_four(t_stack **stack_a, t_stack **stack_b)
{
    int len;
    int min_index;
    int step = 0;

    min_index = get_min_index(*stack_a);
    len = ft_lstsize(*stack_a);
    printf("\nMINI = %d\n", min_index);
    if((min_index + 1) < len/2)
    {
        while(step < min_index)
        {
            do_ra(stack_a);
            step++;
        }
    }
    else
    {
        while(len > min_index)
        {
            do_rra(stack_a);
            len--;
        }
    }
    
    do_pb(stack_a, stack_b);
    // sorting_three(stack_a);
    // do_pa(stack_a,stack_b);
}


