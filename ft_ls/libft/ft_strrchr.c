/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaqqa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 15:32:48 by aeddaqqa          #+#    #+#             */
/*   Updated: 2019/04/09 19:28:26 by aeddaqqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*res;
	char	b;

	b = (char)c;
	res = (char *)s;
	i = 0;
	while (res[i])
		i++;
	while (i >= 0)
	{
		if ((char)res[i] == b)
			return (res + i);
		i--;
	}
	return (0);
}
