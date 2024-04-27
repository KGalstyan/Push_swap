#include "push_swap.h"

void sorting_two(t_stack **stack_a)
{
    if(((*stack_a)->value) > ((*stack_a)->next->value))
        do_sa(stack_a);
}
void sorting_three(t_stack **stack_a)
{
    if((((*stack_a)->value) < ((*stack_a)->next->next->value)) && (((*stack_a)->next->value) > ((*stack_a)->next->next->value)))
    {
        do_rra(stack_a);   
        do_sa(stack_a);
    }
    else if((((*stack_a)->value) > ((*stack_a)->next->value)) && (((*stack_a)->value) < ((*stack_a)->next->next->value)))
        do_sa(stack_a);
    else if((((*stack_a)->value) < ((*stack_a)->next->value)) && (((*stack_a)->next->value) > ((*stack_a)->next->next->value)))
        do_rra(stack_a);
    else if((((*stack_a)->value) > ((*stack_a)->next->value)) && (((*stack_a)->next->value) < ((*stack_a)->next->next->value)))
        do_ra(stack_a);
    else if((((*stack_a)->value) > ((*stack_a)->next->value)) && (((*stack_a)->value) > ((*stack_a)->next->next->value)))
    {
        do_sa(stack_a);
        do_rra(stack_a);
    }
}


void sort(char **av, t_stack **stack_a, t_stack **stack_b)
{
    int len;

    len = ft_lstsize(*stack_a);
    if(len == 2)
        sorting_two(stack_a);
    if(len == 3)
        sorting_three(stack_a);
    //do_pb(stack_a, stack_b);
    if(len == 4)
        sorting_four(stack_a, stack_b);
    //if(len == 5)
    //    sorting_five(stack_a, stack_b);
    //sorting_main(av, stack_a, stack_b);
    printf("%s", av[1]);
}