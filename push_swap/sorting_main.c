#include "push_swap.h"

static void sorting_int_arr(int *int_arr, int len)
{
	int	i = 0;
	int	temp;

	while (i < (len - 1))
	{
		if (int_arr[i] > int_arr[i + 1])
		{
			temp = int_arr[i];
			int_arr[i] = int_arr[i+ 1];
			int_arr[i + 1] = temp;
			i = 0;
		}
		else
			i++;
    }
}

static int get_optimal(int len)
{
    int i;
    int a;
    int b;

    i = 0;
    while(i * i <= len)
    {
        if(i * i  <= len)
            a = i;
        if(i * i * i <= len)
            b = i;
        i++;
    }
    return(a + b + 1);
}

static void sorting_process(t_stack **stack_a, t_stack **stack_b, int *int_arr, int len)
{
    int i;
    int opstep;

    opstep = get_optimal(len);
    i = 0;
    while(i < len)
    {
        if((*stack_a)->value <= int_arr[i])
        {
            do_pb(stack_a, stack_b);
            do_rb(stack_b);
            i++;
        }
        else if((*stack_a)->value <= int_arr[i + opstep])
        {
            do_pb(stack_a, stack_b);
            i++;
        }
        else
            do_ra(stack_a);
        if(i + opstep > len)
            opstep--;
    }
}

void sorting_main(char **av, t_stack **stack_a, t_stack **stack_b)
{
    int len;
    int *int_arr;
    char *str;

    len = arg_checker(av);
    str = make_char_str(av, len);
    len = int_string_len(str);
    int_arr = make_int_string(str);
    free(str);
    sorting_int_arr(int_arr, len);
    sorting_process(stack_a, stack_b, int_arr, len);
    push_back(stack_a, stack_b, len);
}

