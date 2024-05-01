/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgalstya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 17:56:53 by kgalstya          #+#    #+#             */
/*   Updated: 2024/05/01 18:27:03 by kgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sorting_two(t_stack **stack_a)
{
	if (((*stack_a)->value) > ((*stack_a)->next->value))
		do_sa(stack_a, 1);
}

void	sorting_three(t_stack **stack_a)
{
	if ((((*stack_a)->value) < ((*stack_a)->next->next->value))
		&& (((*stack_a)->next->value) > ((*stack_a)->next->next->value)))
	{
		do_rra(stack_a, 1);
		do_sa(stack_a, 1);
	}
	else if ((((*stack_a)->value) > ((*stack_a)->next->value))
		&& (((*stack_a)->value) < ((*stack_a)->next->next->value)))
		do_sa(stack_a, 1);
	else if ((((*stack_a)->value) < ((*stack_a)->next->value))
		&& (((*stack_a)->next->value) > ((*stack_a)->next->next->value)))
		do_rra(stack_a, 1);
	else if ((((*stack_a)->value) > ((*stack_a)->next->value))
		&& (((*stack_a)->next->value) < ((*stack_a)->next->next->value)))
		do_ra(stack_a, 1);
	else if ((((*stack_a)->value) > ((*stack_a)->next->value))
		&& (((*stack_a)->value) > ((*stack_a)->next->next->value)))
	{
		do_sa(stack_a, 1);
		do_rra(stack_a, 1);
	}
}

void	sort(char **av, t_stack **stack_a, t_stack **stack_b)
{
	int	len;

	len = ft_lstsize(*stack_a);
	if (len == 1)
		return ;
	if (len == 2)
		sorting_two(stack_a);
	else if (len == 3)
		sorting_three(stack_a);
	else if (len == 4)
		sorting_four(stack_a, stack_b);
	else if (len == 5)
		sorting_five(stack_a, stack_b);
	else
		sorting_main(av, stack_a, stack_b);
}
