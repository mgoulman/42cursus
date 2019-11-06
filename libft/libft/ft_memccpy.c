/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgoulman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 13:35:43 by mgoulman          #+#    #+#             */
/*   Updated: 2018/10/21 13:43:04 by mgoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	const unsigned char	*a;
	unsigned char		*b;
	size_t				i;

	i = 0;
	a = src;
	b = dst;
	while (n > i)
	{
		b[i] = a[i];
		if (b[i] == (unsigned char)c)
			return (b + i + 1);
		i++;
	}
	return (NULL);
}
