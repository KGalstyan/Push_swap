#include "push_swap.h"

int main(int argc, char **argv)
{
   // t_stack *stack_a;
   // t_stack *stack_b;
    if(argc < 2)
        return(0);
    if(!correct_input(argv))
        printf("Error\n");
    else
        printf("Correct input");
    
    system("leaks pushswap");
    return(0);
}