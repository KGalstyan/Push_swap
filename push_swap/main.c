#include "push_swap.h"

static void	free_stack(t_stack **stack)
{
	t_stack	*tmp;

	if (!stack || !(*stack))
		return ;
	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
	*stack = NULL;
}

int main(int argc, char **argv)
{
    t_stack *stack_a;
    t_stack *stack_b;

    if(!correct_input(argv))
    {
        exit_error(NULL, NULL);
        return(0);
    }
    if(argc < 3)
        return(0);
    stack_a = fill_stack_values(argv);
    stack_b = NULL;
    sort(argv, &stack_a, &stack_b);
    free_stack(&stack_a);
    // if(is_sorted(&stack_a))
    //     printf("stack is SORTED");
    // else
    //     printf("NOOOOOOO");
    // system("leaks pushswap");
    return(0);
}

