/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_checker_utils1.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgalstya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 17:56:13 by kgalstya          #+#    #+#             */
/*   Updated: 2024/05/01 19:12:55 by kgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_digit(char h)
{
	return (h >= '0' && h <= '9');
}

int	sign(char h)
{
	return (h == '+' || h == '-');
}

static int	arg_is_empty(char *str)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (str[i])
	{
		if (is_digit(str[i]))
			n++;
		i++;
	}
	if (i == 0 || n == 0)
		return (0);
	return (1);
}

static int	arg_check(char **av, int i, int len)
{
	int	j;

	j = 0;
	while (av[i][j] != '\0')
	{
		if ((is_digit(av[i][j])) || (sign(av[i][j])))
		{
			j++;
			len++;
		}
		else if ((is_digit(av[i][j + 1])) || (av[i][j] == ' '))
		{
			j++;
			len++;
		}
		else
			return (0);
	}
	return (len);
}

int	arg_checker(char **av)
{
	int	i;
	int	len;

	i = 1;
	len = 0;
	while (av[i])
	{
		if (!arg_is_empty(av[i]))
			return (0);
		len = arg_check(av, i, len);
		if (len == 0)
			return (0);
		len++;
		i++;
	}
	return (len);
}
