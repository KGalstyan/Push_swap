/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_revers_rotate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgalstya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 22:51:20 by kgalstya          #+#    #+#             */
/*   Updated: 2024/04/29 22:28:35 by kgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void do_rra(t_stack **stack_a)
{
    t_stack *tmp;
    t_stack *last;
    t_stack *penu;
    
    if(!(*stack_a) || !(*stack_a)->next)
        return ;
    last = stack_last(*stack_a);
    penu = stack_penultimate(*stack_a);
    tmp = (*stack_a);
    (*stack_a) = last;
    last->next = tmp;
    penu->next = NULL;
    ft_putstr("rra\n");
}

void do_rrb(t_stack **stack_b)
{
    t_stack *tmp;
    t_stack *last;
    t_stack *penu;
    
    if(!(*stack_b) || !(*stack_b)->next)
        return ;
    last = stack_last(*stack_b);
    penu = stack_penultimate(*stack_b);
    tmp = (*stack_b);
    (*stack_b) = last;
    last->next = tmp;
    penu->next = NULL;
    ft_putstr("rrb\n");
}

void do_rrr(t_stack **stack_a, t_stack **stack_b)
{
    do_rra(stack_a);
    do_rrb(stack_b);
    ft_putstr("rrr\n");
}
