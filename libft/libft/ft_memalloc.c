/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgoulman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 09:22:03 by mgoulman          #+#    #+#             */
/*   Updated: 2018/10/14 20:59:24 by mgoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned int		i;
	unsigned char		*p;

	i = 0;
	if (!(p = (unsigned char *)malloc(size * sizeof(unsigned char))))
		return (NULL);
	while (i < size)
		p[i++] = 0;
	return (p);
}
