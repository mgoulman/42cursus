/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaqqa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 16:09:09 by aeddaqqa          #+#    #+#             */
/*   Updated: 2019/04/09 18:52:25 by aeddaqqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*ss1;
	char	*ss2;
	size_t	i;

	i = 0;
	ss1 = (char *)s1;
	ss2 = (char *)s2;
	while (i < n)
	{
		if (ss1[i] != ss2[i])
			return ((unsigned char)ss1[i] - (unsigned char)ss2[i]);
		i++;
	}
	return (0);
}
