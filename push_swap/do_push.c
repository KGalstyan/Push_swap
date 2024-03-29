/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgalstya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 17:27:41 by kgalstya          #+#    #+#             */
/*   Updated: 2024/03/29 16:42:10 by kgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void do_pa(t_stack *stack_a, t_stack *stack_b)
{
    t_stack new;
    t_stack tmp;
    
    if(stack_b != NULL)
    {
        tmp = stack_a;
        new = new_stack(stack_a);
        new->index = 0;
        new->value = stack_b->value;
        new->next = tmp;
        stack_a = new;
        stack_b = stack_b->next;
        ft_putstr("pa\n");
    }
}

void do_pb(t_stack *stack_a, t_stack *stack_b)
{
    t_stack new;
    t_stack tmp;
    
    tmp = stack_b;
    new = new_stack(stack_b);
    new->index = 0;
    new->value = stack_a->value;
    new->next = tmp;
    stack_b = new;
    stack_a = stack_a->next;
    ft_putstr("pb\n");
}
