/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgalstya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 21:34:53 by kgalstya          #+#    #+#             */
/*   Updated: 2024/03/29 15:50:27 by kgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>

typedef struct s_stack
{
    int index;
    int value;
    
    struct s_stack	*next;
}	t_stack;

#define stack_a
#define stack_b

//swap//
void do_sa(t_stack *stack_a);
void do_sb(t_stack *stack_b);
void do_ss(t_stack *stack_a, t_stack *stack_b);

//rotate//
void do_ra(t_stack *stack_a);
void do_rb(t_stack *stack_b);

//rev-rotate

void do_rra(t_stack *stack_a);
void do_rrb(t_stack *stack_b);
void do_rrr(t_stack *stack_a, t_stack *stack_b);


//func//
t_stack  stack_last(t_stack *stack);
t_stack  stack_penultimate(t_stack *stack);
void	 ft_putstr(char *s, int fd);
t_stack new_stack(t_stack *stack);