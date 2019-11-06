/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlamhidr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 20:04:36 by hlamhidr          #+#    #+#             */
/*   Updated: 2018/10/10 18:10:50 by hlamhidr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*dst;
	int				i;

	dst = b;
	i = 0;
	while (len > 0)
	{
		dst[i] = (unsigned char)c;
		len--;
		i++;
	}
	return (dst);
}
