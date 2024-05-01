/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgalstya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 17:27:41 by kgalstya          #+#    #+#             */
/*   Updated: 2024/05/01 18:44:23 by kgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_putstr(char *s)
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		write (1, &s[i], 1);
		i++;
	}
}

void	do_pa(t_stack **stack_a, t_stack **stack_b, int flag)
{
	t_stack	*tmp;

	if ((*stack_b) == NULL || (stack_b == NULL))
		return ;
	tmp = (*stack_b)->next;
	(*stack_b)->next = *stack_a;
	*stack_a = *stack_b;
	*stack_b = tmp;
	if (flag == 0)
		return ;
	else
		ft_putstr("pa\n");
}

void	do_pb(t_stack **stack_a, t_stack **stack_b, int flag)
{
	t_stack	*tmp;

	if ((*stack_a) == NULL || (stack_a == NULL))
		return ;
	tmp = (*stack_a)->next;
	(*stack_a)->next = *stack_b;
	*stack_b = *stack_a;
	*stack_a = tmp;
	if (flag == 0)
		return ;
	else
		ft_putstr("pb\n");
}
