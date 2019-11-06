/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlamhidr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 18:12:44 by hlamhidr          #+#    #+#             */
/*   Updated: 2018/10/10 18:08:08 by hlamhidr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char *s;
	unsigned const char *d;
	int					i;

	s = s1;
	d = s2;
	i = 0;
	while (0 < n)
	{
		if (s[i] != d[i])
			return (s[i] - d[i]);
		n--;
		i++;
	}
	return (0);
}
