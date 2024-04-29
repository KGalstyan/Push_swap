/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgalstya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 21:41:31 by kgalstya          #+#    #+#             */
/*   Updated: 2024/04/29 14:21:01 by kgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void do_sa(t_stack **stack_a)
{
    int tmp;
    tmp = (*stack_a)->value;
    (*stack_a)->value = (*stack_a)->next->value;
    (*stack_a)->next->value = tmp;
    ft_putstr("sa\n");
}

void do_sb(t_stack **stack_b)
{
    int tmp;
    if ((*stack_b) == NULL || (*stack_b)->next == NULL)
	    return ;
    tmp = (*stack_b)->value;
    (*stack_b)->value = (*stack_b)->next->value;
    (*stack_b)->next->value = tmp;
    ft_putstr("sb\n");
}

void do_ss(t_stack **stack_a, t_stack **stack_b)
{
    do_sa(stack_a);
    do_sb(stack_b);
    ft_putstr("ss\n");
}
