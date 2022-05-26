/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosford <bcosford@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:22:50 by bcosford          #+#    #+#             */
/*   Updated: 2022/05/11 17:15:33 by bcosford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)

{
	unsigned char	charup;
	unsigned char	charlo;

	charup = c;
	if ((c > 64) && (c < 91))
	{
		charlo = (charup + 32);
		return ((unsigned char)charlo);
	}
	return ((unsigned char)charup);
}
