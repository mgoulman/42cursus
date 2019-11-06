/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgoulman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 13:34:33 by mgoulman          #+#    #+#             */
/*   Updated: 2018/10/13 14:47:42 by mgoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char		*c;
	const unsigned char		*p;
	size_t					i;

	c = s1;
	p = s2;
	i = 0;
	while (i < n)
	{
		if (c[i] != p[i])
			return (c[i] - p[i]);
		i++;
	}
	return (0);
}
