/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosford <bcosford@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:14:19 by bcosford          #+#    #+#             */
/*   Updated: 2022/04/28 13:34:02 by bcosford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)

{
	void	*ptr;
	size_t	t;

	if (size != 0)
	{
		ptr = (void *)malloc(count * size);
		return (ptr);
		t = count * size;
		ptr = malloc(t);
		if (!ptr)
			return (NULL);
		ft_bzero(ptr, t);
		return (ptr);
	}
	return (0);
}
