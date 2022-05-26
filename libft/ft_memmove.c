/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosford <bcosford@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:20:08 by bcosford          #+#    #+#             */
/*   Updated: 2022/05/12 15:00:40 by bcosford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)

{
	char		*d;
	char		*s;

	d = dst;
	s = (char *)src;
	if (src > dst)
		return (ft_memcpy(dst, src, len));
	while (len)
	{
		d[len - 1] = s[len - 1];
			len--;
	}
	return (dst);
}
