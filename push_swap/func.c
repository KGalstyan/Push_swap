/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgalstya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 22:19:09 by kgalstya          #+#    #+#             */
/*   Updated: 2024/03/29 15:55:34 by kgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack  stack_last(t_stack *stack)
{
	while (stack && stack->next != NULL)
		stack = stack->next;
    return(stack);
}

t_stack stack_penultimate(t_stack *stack)
{
    while(stack && stack->next != NULL && stack->next->next != NULL)
        stack = stack->next;
    return(stack);
}

t_stack new_stack(t_stack *stack)
{
	t_stack	*new;

	new = malloc(sizeof * new);
	if (!new)
		return (NULL);
	new->value = 1;
	new->index = 0;
	new->next = NULL;
	return (new);
}


void	ft_putstr(char *s, int fd)
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


