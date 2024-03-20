/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgalstya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 22:00:23 by kgalstya          #+#    #+#             */
/*   Updated: 2024/03/20 23:00:38 by kgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void do_ra(t_stack *stack_a)
{
    t_stack tmp;
    t_stack last;
    
    tmp = stack_a;
    stack_a = stack_a->next;
    last = stack_ahead(stack_a);
    tmp->next = NULL;
    last->next = tmp;
}

void do_rb(t_stack *stack_b)
{
    t_stack tmp;
    t_stack last;
    
    tmp = stack_b;
    stack_b = stack_b->next;
    last = stack_ahead(stack_b);
    tmp->next = NULL;
    last->next = tmp;
}

void do_rr(t_stack *stack_a, t_stack *stack_b)
{
    do_ra(stack_a);
    do_rb(stack_b);
}
