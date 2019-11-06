/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlamhidr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 10:47:58 by hlamhidr          #+#    #+#             */
/*   Updated: 2018/10/11 15:35:50 by hlamhidr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*zone;
	size_t			i;

	i = 0;
	if (!(zone = (unsigned char *)malloc(sizeof(unsigned char) * size)))
		return (NULL);
	while (i <= size)
		zone[i++] = 0;
	return (zone);
}
