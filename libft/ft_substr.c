/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosford <bcosford@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 16:17:10 by bcosford          #+#    #+#             */
/*   Updated: 2022/05/18 13:11:03 by bcosford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

char	*ft_substr(const char *s, unsigned int start, size_t len)

{
	char			*sub;
	size_t			i;
	char			*str;

	i = 0;
	str = (char *)s;
	sub = malloc(len + 1);
	if (!sub)
		return (NULL);
	if (start >= ft_strlen(str))
		return (sub);
	while (i < len)
	{
		sub[i] = s[i + start];
		i++;
	}
	sub[i + start] = (0);
	return (sub);
}

/*
#include <stdio.h>

int main()
{
	char *new;
	new = ft_substr("make new array", 6, 4);
	printf("%s\n", new);
	return (0);
}*/