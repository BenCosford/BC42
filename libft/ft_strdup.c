/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosford <bcosford@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:21:48 by bcosford          #+#    #+#             */
/*   Updated: 2022/05/03 12:04:02 by bcosford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)

{
	char			*s2;
	size_t			len;

	len = ft_strlen(s1) + 1;
	s2 = malloc(sizeof(char) * len);
	if (!s2)
		return (0);
	s2 = ft_memcpy((char *)s2, (const char *)s1, len);
	return (s2);
}
