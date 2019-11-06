/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaqqa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 06:51:25 by aeddaqqa          #+#    #+#             */
/*   Updated: 2019/04/09 19:34:17 by aeddaqqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*fraiche;
	size_t	j;
	char	*str;

	if (s)
	{
		j = 0;
		str = (char *)s;
		fraiche = (char *)malloc(sizeof(*fraiche) * len + 1);
		if (fraiche == NULL)
			return (NULL);
		if (*str)
		{
			while (str[j] && j < len)
				fraiche[j++] = str[start++];
			if (!str[j] && j < len)
				return (0);
			fraiche[j] = '\0';
			return (fraiche);
		}
	}
	return (0);
}
