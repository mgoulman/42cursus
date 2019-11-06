/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlamhidr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 10:08:31 by hlamhidr          #+#    #+#             */
/*   Updated: 2018/10/10 18:09:55 by hlamhidr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*s1;
	const unsigned char *s2;

	s1 = dst;
	s2 = src;
	while (n > 0)
	{
		*s1++ = *s2++;
		n--;
	}
	return (dst);
}
