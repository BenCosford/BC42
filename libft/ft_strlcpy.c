/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosford <bcosford@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:22:00 by bcosford          #+#    #+#             */
/*   Updated: 2022/05/12 15:16:39 by bcosford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)

{
	size_t	i;

	i = 0;
	while (src[i] && (i + 1) < dstsize)
	{
		dst[i] = src[i];
			i++;
	}
	if (dstsize != 0)
		dst[i] = '\0';
	return (ft_strlen(src));
}
