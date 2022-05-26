/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosford <bcosford@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 11:47:10 by bcosford          #+#    #+#             */
/*   Updated: 2022/05/18 12:22:29 by bcosford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)

{
	int	i;

	i = 0;
	if (!s)
	{
		return ;
	}
	while (s[i])
	{
		write(fd, &s[i], fd);
			i++;
	}
	write(fd, "\n", fd);
}
