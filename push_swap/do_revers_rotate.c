/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_revers_rotate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgalstya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 22:51:20 by kgalstya          #+#    #+#             */
/*   Updated: 2024/03/29 17:19:04 by kgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void do_rra(t_stack *stack_a)
{
    t_stack tmp;
    t_stack last;
    t_stack second;
    
    second = stack_a;
    tmp = stack_penultimate(stack_a);
    last = stack_last(stack_a);
    last->next = second;
    last = stack_a;
    tmp->next = NULL;
    ft_putstr("rra\n");
}

void do_rrb(t_stack *stack_b)
{
    t_stack tmp;
    t_stack last;
    t_stack second;
    
    second = stack_b;
    tmp = stack_penultimate(stack_b);
    last = stack_last(stack_b);
    last->next = second;
    last = stack_b;
    tmp->next = NULL;
    ft_putstr("rrb");
}

void do_rrr(t_stack *stack_a, t_stack *stack_b)
{
    do_rra(stack_a);
    do_rrb(stack_b);
    ft_putstr("rrr\n");
}
