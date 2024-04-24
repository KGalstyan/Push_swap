/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgalstya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:05:00 by kgalstya          #+#    #+#             */
/*   Updated: 2024/04/23 18:40:14 by kgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*str;
	size_t			mem;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	mem = ft_strlen(s + start);
	if (len < mem)
		mem = len;
	str = (char *)malloc((mem + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = start;
	j = 0;
	while (s[i] != '\0' && j < len && !(start > (unsigned int)ft_strlen(s)))
	{
		str[j] = s[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}
