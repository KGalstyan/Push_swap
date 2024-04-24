/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgalstya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:38:40 by kgalstya          #+#    #+#             */
/*   Updated: 2024/04/24 18:51:32 by kgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_lstnew(int value)
{
	t_stack	*head;

	head = (t_stack *)malloc(sizeof(*head));
	if (!head)
		return (NULL);
	head->value = value;
	head->next = NULL;
	return (head);
}
