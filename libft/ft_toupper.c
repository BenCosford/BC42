/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosford <bcosford@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:23:01 by bcosford          #+#    #+#             */
/*   Updated: 2022/05/11 17:11:59 by bcosford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)

{
	unsigned char	charup;
	unsigned char	charlo;

	charlo = c;
	if ((c > 96) && (c < 123))
	{
		charup = (charlo - 32);
		return ((unsigned char)charup);
	}
	return ((unsigned char)charlo);
}
