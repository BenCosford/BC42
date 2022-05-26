/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosford <bcosford@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:20:02 by bcosford          #+#    #+#             */
/*   Updated: 2022/05/12 14:44:20 by bcosford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)

{
	char	*d;
	char	*s;

	if (!src)
		return (dst);
	d = (char *)dst;
	s = (char *)src;
	while (n)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (dst);
}
