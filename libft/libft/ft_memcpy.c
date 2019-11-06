/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgoulman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 13:36:12 by mgoulman          #+#    #+#             */
/*   Updated: 2018/10/21 13:42:55 by mgoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const unsigned char	*c;
	unsigned char		*b;
	size_t				i;

	i = 0;
	c = src;
	b = dst;
	while (n > i)
	{
		b[i] = c[i];
		i++;
	}
	return (dst);
}
