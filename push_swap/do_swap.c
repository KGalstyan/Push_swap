/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgalstya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 21:41:31 by kgalstya          #+#    #+#             */
/*   Updated: 2024/05/01 17:47:00 by kgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_sa(t_stack **stack_a, int flag)
{
	int	tmp;

	if (!(*stack_a) || !(stack_a) || (*stack_a)->next == NULL)
		return ;
	tmp = (*stack_a)->value;
	(*stack_a)->value = (*stack_a)->next->value;
	(*stack_a)->next->value = tmp;
	if (flag == 0)
		return ;
	else
		ft_putstr("sa\n");
}

void	do_sb(t_stack **stack_b, int flag)
{
	int	tmp;

	if (!(*stack_b) || !(stack_b) || (*stack_b)->next == NULL)
		return ;
	tmp = (*stack_b)->value;
	(*stack_b)->value = (*stack_b)->next->value;
	(*stack_b)->next->value = tmp;
	if (flag == 0)
		return ;
	else
		ft_putstr("sb\n");
}

void	do_ss(t_stack **stack_a, t_stack **stack_b, int flag)
{
	do_sa(stack_a, 0);
	do_sb(stack_b, 0);
	if (flag == 0)
		return ;
	else
		ft_putstr("ss\n");
}
