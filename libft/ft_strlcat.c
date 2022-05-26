/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosford <bcosford@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:21:55 by bcosford          #+#    #+#             */
/*   Updated: 2022/05/12 15:34:21 by bcosford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)

{
	size_t	i;

	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	i = ft_strlen(dst);
	while ((i + 1) < dstsize && *src != 0)
	{
		dst[i] = *src++;
			i++;
	}
	if (dstsize != 0)
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(src));
}

/*need: total size of string when the source has been added to the destination.
But you can only add the differnce between the dstsize 
and the actual dst itself from the source. 
so you have to find out the length of the dst first. 
Then determine how much space is left, allowing for a nul terminator.
Then append that remaining size from the source to the dst. 
Then return the new total size of dst and src. It may be the same as dstsize. 
But it may be less. It will never be more. 

return total size
total = 
dst plus
src up to ((dstsize - 1) - dst)
But if 
can use (dstsize - strlen(dst) - 1) to find how much src to append. 
It will null terminate unless dstsize is 0.*/
