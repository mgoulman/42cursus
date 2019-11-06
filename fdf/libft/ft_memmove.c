/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgoulman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 13:37:42 by mgoulman          #+#    #+#             */
/*   Updated: 2018/10/21 13:43:14 by mgoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*s1;
	const unsigned char	*s2;

	s1 = (unsigned char *)dst;
	s2 = (unsigned char *)src;
	if (s2 > s1)
		ft_memcpy(dst, src, len);
	else
	{
		while (len > 0)
		{
			s1[len - 1] = s2[len - 1];
			len--;
		}
	}
	return (dst);
}
