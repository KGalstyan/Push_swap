/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgalstya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 17:27:41 by kgalstya          #+#    #+#             */
/*   Updated: 2024/04/29 13:36:14 by kgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void do_pa(t_stack **stack_a, t_stack **stack_b)
{
    t_stack	*tmp;

	if (*stack_b == NULL)
		return ;
	tmp = (*stack_b)->next;
	(*stack_b)->next = *stack_a;
	*stack_a = *stack_b;
	*stack_b = tmp;
    ft_putstr("pa\n");
}
void do_pb(t_stack **stack_a, t_stack **stack_b)
{
    t_stack	*tmp;

	if (*stack_a == NULL)
		return ;
	tmp = (*stack_a)->next;
	(*stack_a)->next = *stack_b;
	*stack_b = *stack_a;
	*stack_a = tmp;
    ft_putstr("pb\n");
}

