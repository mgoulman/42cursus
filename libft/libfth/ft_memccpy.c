/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlamhidr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 10:45:24 by hlamhidr          #+#    #+#             */
/*   Updated: 2018/10/12 15:08:01 by hlamhidr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*s1;
	unsigned const char	*s2;

	s1 = dst;
	s2 = src;
	while (0 < n)
	{
		if ((*s1++ = *s2++) == (unsigned char)c)
			return (s1);
		n--;
	}
	return (NULL);
}
