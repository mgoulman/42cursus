/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlamhidr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 15:53:14 by hlamhidr          #+#    #+#             */
/*   Updated: 2018/10/10 18:07:45 by hlamhidr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char	*s1;
	int					i;

	s1 = s;
	i = 0;
	while (0 < n)
	{
		if (s1[i] == (unsigned char)c)
			return ((char *)s1 + i);
		n--;
		i++;
	}
	return (NULL);
}
