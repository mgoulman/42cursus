/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaqqa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/27 12:18:44 by aeddaqqa          #+#    #+#             */
/*   Updated: 2019/04/09 19:25:49 by aeddaqqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	char	*s;

	s = (char *)s2;
	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s[j] && j < n)
	{
		s1[i] = (char)s[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return (s1);
}
