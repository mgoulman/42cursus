/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaqqa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 13:02:52 by aeddaqqa          #+#    #+#             */
/*   Updated: 2019/04/09 19:00:08 by aeddaqqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int		i;
	int		j;
	char	*res;

	i = 0;
	j = 0;
	res = (char *)s2;
	while (s1[i])
		i++;
	while (res[j])
	{
		s1[i] = (unsigned char)res[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return (s1);
}
