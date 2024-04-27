//#include "push_swap.h"

/*
void sorting_int_arr(int *int_arr)
{
	int	i = 0;
	int	temp;

	while (i < (size - 1))
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
    retrun(int_arr);
}
*/
int get_optimal(int len)
{
    
}
/*
int *sorting_main(char **av, t_stack stack_a, t_stack stack_b)
{
    int len;
    int opstep;
    int *int_arr;
    char *str;

    len = arg_checker(av);
    str = make_char_str(av, len);
    len = int_string_len(str);
    int_arr = make_int_string(str);
    free(str);
    sorting_int_arr(int_arr);
    opstep = get_optimal(len);
}
*/
#include <stdio.h>
int main()
{
    printf("\n%d\n",get_optimal(100));
    printf("\n%d\n",get_optimal(500));
    return(0);
}