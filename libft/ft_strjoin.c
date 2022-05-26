/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosford <bcosford@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 12:53:26 by bcosford          #+#    #+#             */
/*   Updated: 2022/05/16 15:52:29 by bcosford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)

{
	char	*newstr;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s1 && !s2)
		return (NULL);
	newstr = (char *)malloc(sizeof(char) * (sizeof(s1) + sizeof(s2) - 1));
	if (!newstr)
		return (NULL);
	while (s1[i])
	{
		newstr[i] = s1[i];
			i++;
	}
	while (s2[j])
	{
		newstr[i + j] = s2[j];
			j++;
	}
	newstr[i + j] += '\0';
	return (newstr);
}
