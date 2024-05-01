/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgalstya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 17:56:35 by kgalstya          #+#    #+#             */
/*   Updated: 2024/05/01 18:31:29 by kgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (argc < 2)
		return (0);
	if (!correct_input(argv))
	{
		exit_error(NULL, NULL);
		return (0);
	}
	stack_a = fill_stack_values(argv);
	stack_b = NULL;
	if (is_sorted(&stack_a))
	{
		free_stack(&stack_a);
		return (0);
	}
	else
		sort(argv, &stack_a, &stack_b);
	free_stack(&stack_a);
	return (0);
}
