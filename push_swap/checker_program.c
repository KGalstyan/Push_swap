/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_program.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgalstya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 17:55:02 by kgalstya          #+#    #+#             */
/*   Updated: 2024/05/01 19:40:00 by kgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	check_operation(char *str)
{
	if (ft_strcmp(str, "ra\n") == 0 || ft_strcmp(str, "rb\n") == 0
		|| ft_strcmp(str, "rr\n") == 0)
		return (0);
	else if (ft_strcmp(str, "pa\n") == 0 || ft_strcmp(str, "pb\n") == 0)
		return (0);
	else if (ft_strcmp(str, "rra\n") == 0 || ft_strcmp(str, "rrb\n") == 0
		|| ft_strcmp(str, "rrr\n") == 0)
		return (0);
	else if (ft_strcmp(str, "sa\n") == 0 || ft_strcmp(str, "sb\n") == 0
		|| ft_strcmp(str, "ss\n") == 0)
		return (0);
	else
		return (1);
}

static void	do_action(t_stack **stack_a, t_stack **stack_b, char *str)
{
	if (ft_strcmp(str, "ra\n") == 0)
		do_ra(stack_a, 0);
	else if (ft_strcmp(str, "rb\n") == 0)
		do_rb(stack_b, 0);
	else if (ft_strcmp(str, "rr\n") == 0)
		do_rr(stack_a, stack_b, 0);
	else if (ft_strcmp(str, "sa\n") == 0)
		do_sa(stack_a, 0);
	else if (ft_strcmp(str, "sb\n") == 0)
		do_sb(stack_b, 0);
	else if (ft_strcmp(str, "ss\n") == 0)
		do_ss(stack_a, stack_b, 0);
	else if (ft_strcmp(str, "rra\n") == 0)
		do_rra(stack_a, 0);
	else if (ft_strcmp(str, "rrb\n") == 0)
		do_rrb(stack_b, 0);
	else if (ft_strcmp(str, "rrr\n") == 0)
		do_rrr(stack_a, stack_b, 0);
	else if (ft_strcmp(str, "pa\n") == 0)
		do_pa(stack_a, stack_b, 0);
	else if (ft_strcmp(str, "pb\n") == 0)
		do_pb(stack_a, stack_b, 0);
}

static void	result(t_stack **stack_a, t_stack **stack_b)
{
	int	len;

	len = ft_lstsize(*stack_b);
	if (is_sorted(stack_a) && len == 0)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	if ((stack_a) != NULL || (*stack_a) != NULL)
		free_stack(stack_a);
	if ((stack_b) != NULL || (*stack_b) != NULL)
		free_stack(stack_b);
}

static int	int_check(int ac, char **av)
{
	if (ac < 2)
		return (0);
	if (!correct_input(av))
	{
		exit_error(NULL, NULL);
		return (0);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	char	*str;
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (!(int_check(argc, argv)))
		return (0);
	stack_a = fill_stack_values(argv);
	stack_b = NULL;
	while (1)
	{
		str = get_next_line(0);
		if (!str)
			break ;
		if (check_operation(str))
		{
			exit_error(NULL, NULL);
			return (0);
		}
		do_action(&stack_a, &stack_b, str);
		free(str);
	}
	result(&stack_a, &stack_b);
	return (0);
}
