#include "push_swap.h"

int get_min_index(t_stack *stack_a)
{
    t_stack *tmp;
    int min_index;
    int value;
    int i;

    i = 0;
    min_index = 0;
    tmp = stack_a;
    value = tmp->value;
    while(tmp != NULL)
    {
        if(tmp->value < value)
        {
            value = tmp->value;
            min_index = i;
        }
        tmp = tmp->next;
        i++;
    }
    return(min_index);
}

static void sort_in_stack_a(t_stack **stack_a)
{
    int len;
    int min_index;

    min_index = get_min_index(*stack_a);
    len = ft_lstsize(*stack_a);
    if((min_index) < len/2)
    {
        len = 0;
        while(len < min_index)
        {
            do_ra(stack_a);
            len++;
        }
    }
    else
    {
        while(len > min_index && min_index != 0)
        {
            do_rra(stack_a);
            len--;
        }
    }
}
void sorting_four(t_stack **stack_a, t_stack **stack_b)
{
    sort_in_stack_a(stack_a);
    do_pb(stack_a, stack_b);
    sorting_three(stack_a);
    do_pa(stack_a,stack_b);
}

void sorting_five(t_stack **stack_a, t_stack **stack_b)
{
    sort_in_stack_a(stack_a);
    do_pb(stack_a, stack_b);
    sort_in_stack_a(stack_a);
    do_pb(stack_a, stack_b);
    sorting_three(stack_a);
    if((*stack_b)->value < (*stack_b)->next->value)
        do_sb(stack_b);
    do_pa(stack_a, stack_b);
    do_pa(stack_a, stack_b);
}
