/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosford <bcosford@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:18:16 by bcosford          #+#    #+#             */
/*   Updated: 2022/05/13 15:37:29 by bcosford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_atoi(const char *str)

{
	int	i;
	int	sign;
	int	out;

	i = 0;
	sign = 1;
	out = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
				sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		out = (str[i] - '0') + (out * 10);
			i++;
	}		
	return (out * sign);
}
