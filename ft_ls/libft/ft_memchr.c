/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaqqa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 17:04:03 by aeddaqqa          #+#    #+#             */
/*   Updated: 2019/04/09 18:51:46 by aeddaqqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	b;
	char			*str;
	size_t			i;

	i = 0;
	b = (unsigned char)c;
	str = (char *)s;
	while (i < n)
	{
		if ((unsigned char)str[i] == b)
			return (str + i);
		i++;
	}
	return (0);
}
