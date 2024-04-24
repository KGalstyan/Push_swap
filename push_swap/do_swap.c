/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgalstya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 21:41:31 by kgalstya          #+#    #+#             */
/*   Updated: 2024/04/24 19:33:24 by kgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_putstr(char *s)
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
void do_sa(t_stack *stack_a)
{
    int tmp;
    tmp = stack_a->value;
    stack_a->value = stack_a->next->value;
    stack_a->next->value = tmp;
    /*
    tmp = stack_a->index;
    stack_a->index = stack_a->next->index;
    stack_a->next->index = tmp->index;
    */
    ft_putstr("sa\n");
}
/*
void do_sb(t_stack *stack_b)
{
    t_stack tmp;
    if (stack_b == NULL || stack_b->next == NULL)
	    return ;
    tmp = stack_b->value;
    stack_b->value = stack_b->next->value;
    stack_b->next->value = tmp->value;
    tmp = stack_b->index;
    stack_b->index = stack_b->next->index;
    stack_b->next->index = tmp->index;
    ft_putstr("sb\n");
}

void do_ss(t_stack *stack_a, t_stack *stack_b)
{
    do_sa(stack_a);
    do_sb(stack_b);
    ft_putstr("ss\n");
}
*/