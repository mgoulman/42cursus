/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlamhidr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 14:45:30 by hlamhidr          #+#    #+#             */
/*   Updated: 2018/10/15 11:53:47 by hlamhidr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s1, int c)
{
	int i;
	int j;

	i = 0;
	j = ft_strlen(s1);
	while (i <= j)
	{
		if (s1[i] == (char)c)
			return ((char *)s1 + i);
		i++;
	}
	return (NULL);
}
