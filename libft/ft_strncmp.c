/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosford <bcosford@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:22:27 by bcosford          #+#    #+#             */
/*   Updated: 2022/05/11 17:16:39 by bcosford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, unsigned int n)

{
	unsigned int	i;
	unsigned char	*string1;
	unsigned char	*string2;

	string1 = (unsigned char *)str1;
	string2 = (unsigned char *)str2;
	i = 0;
	while (string1[i] != '\0' && string1[i] == string2[i] && (i < n))
	{
		i++;
	}
	if (i < n)
	{
		return (string1[i] - string2[i]);
	}
	return (0);
}
