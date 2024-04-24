#include "push_swap.h"

static void print_stack(t_stack *a)
{
    int num;
    printf("\n");
    while(a != NULL)
    {
        num = a->value;
        printf("%d\n", num);
        a = a->next;
    }
}


int main(int argc, char **argv)
{
    t_stack *stack_a;
    t_stack *stack_b;

    if(argc < 2)
        return(0);
    if(!correct_input(argv))
    {
        printf("ERROR");
        return(0);
    }
    else
        printf("Correct input");
    stack_a = fill_stack_values(argv);
    sort(stack_a, stack_b);
    print_stack(stack_a);
    system("leaks pushswap");
    return(0);
}

