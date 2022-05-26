/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosford <bcosford@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:19:45 by bcosford          #+#    #+#             */
/*   Updated: 2022/05/03 16:23:09 by bcosford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)

{
	unsigned char	*str;
	unsigned char	chr;

	chr = (unsigned char)c;
	str = (unsigned char *)s;
	while (n)
	{
		if (*str == chr)
			return ((unsigned char *)str);
		str++;
		n--;
	}
	return (NULL);
}
