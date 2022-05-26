/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosford <bcosford@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 16:12:07 by bcosford          #+#    #+#             */
/*   Updated: 2022/05/18 10:50:52 by bcosford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	find_set(char c, char const *set)


{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)

{
	char	*str;
	size_t	i;
	size_t	start;
	size_t	end;

	start = 0;
	i = 0;
	while (s1[start] && find_set(s1[start], set))
	{
		start++;
	}
	end = ft_strlen(s1);
	while (end > start && find_set(s1[end - 1], set))
	{
		end--;
	}
	str = malloc(sizeof(*s1) * (end - start + 1));
	if (!str)
		return (NULL);
	while (start < end)
	{
		str[i++] = s1[start++];
	}
	str[i] = '\0';
	return (str);
}
