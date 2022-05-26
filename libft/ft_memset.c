/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosford <bcosford@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:20:13 by bcosford          #+#    #+#             */
/*   Updated: 2022/04/29 13:53:24 by bcosford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)

{
	char	*btr;

	btr = (char *)b;
	while (len > 0)
	{
		btr[len - 1] = c;
			len--;
	}
	return (b);
}
