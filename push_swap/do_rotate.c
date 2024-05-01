/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgalstya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 22:00:23 by kgalstya          #+#    #+#             */
/*   Updated: 2024/05/01 17:46:55 by kgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_ra(t_stack **stack_a, int flag)
{
	t_stack	*tmp;
	t_stack	*last;

	if (!(*stack_a) || (*stack_a)->next == NULL || stack_a == NULL)
		return ;
	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	last = stack_last(*stack_a);
	tmp->next = NULL;
	last->next = tmp;
	if (flag == 0)
		return ;
	else
		ft_putstr("ra\n");
}

void	do_rb(t_stack **stack_b, int flag)
{
	t_stack	*tmp;
	t_stack	*last;

	if (!(*stack_b) || (*stack_b)->next == NULL || stack_b == NULL)
		return ;
	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	last = stack_last(*stack_b);
	tmp->next = NULL;
	last->next = tmp;
	if (flag == 0)
		return ;
	else
		ft_putstr("rb\n");
}

void	do_rr(t_stack **stack_a, t_stack **stack_b, int flag)
{
	do_ra(stack_a, 0);
	do_rb(stack_b, 0);
	if (flag == 0)
		return ;
	else
		ft_putstr("rr\n");
}
