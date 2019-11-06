/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaqqa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 15:27:22 by aeddaqqa          #+#    #+#             */
/*   Updated: 2019/04/09 18:49:22 by aeddaqqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst
		, const void *src, int c, size_t n)
{
	size_t				i;
	char				*s1;
	char				*s2;
	unsigned char		b;

	b = (unsigned char)c;
	i = 0;
	s1 = (char *)dst;
	s2 = (char *)src;
	while (i < n)
	{
		s1[i] = s2[i];
		if ((unsigned char)s1[i] == b)
			return (s1 + i + 1);
		i++;
	}
	return (0);
}
