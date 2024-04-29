/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgalstya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 22:19:09 by kgalstya          #+#    #+#             */
/*   Updated: 2024/04/29 22:14:22 by kgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack  *stack_last(t_stack *stack)
{
	while (stack && stack->next != NULL)
		stack = stack->next;
    return(stack);
}

t_stack *stack_penultimate(t_stack *stack)
{
    while(stack && stack->next != NULL && stack->next->next != NULL)
        stack = stack->next;
    return(stack);
}


// static t_stack new_stack(t_stack *stack)
// {
// 	t_stack	*new;

// 	new = malloc(sizeof * new);
// 	if (!new)
// 		return (NULL);
// 	new->value = 1;
// 	new->index = 0;
// 	new->next = NULL;
// 	return (new);
// }


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


static void	free_stack(t_stack **stack)
{
	t_stack	*tmp;

	if (!stack || !(*stack))
		return ;
	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
	*stack = NULL;
}


void	exit_error(t_stack **stack_a, t_stack **stack_b)
{
	if (stack_a == NULL || *stack_a != NULL)
		free_stack(stack_a);
	if (stack_b == NULL || *stack_b != NULL)
		free_stack(stack_b);
	write(2, "Error\n", 6);
	exit (1);
}



int	is_sorted(t_stack **stack)
{
	while ((*stack)->next != NULL)
	{
		if ((*stack)->value > (*stack)->next->value)
			return (0);
		(*stack) = (*stack)->next;
	}
	return (1);
}