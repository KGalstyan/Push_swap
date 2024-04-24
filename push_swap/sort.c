#include "push_swap.h"

void sorting_two(t_stack *stack_a, t_stack *stack_b)
{
    if((stack_a->value) > (stack_a->next->value))
        do_sa(stack_a);
}
void sorting_three(t_stack *stack_a)
{
    if((stack_a->value) > (stack_a->next->value))
        do_sa(stack_a);
    if((stack_a->value) < (stack_a->next->next->value))
        do_rra(stack_a);
}


void sort(t_stack *stack_a, t_stack *stack_b)
{
    int len;

    len = ft_lstsize(stack_a);
    if(len == 2)
        sorting_two(stack_a, stack_b);
}