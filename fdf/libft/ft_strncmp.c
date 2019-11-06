/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgoulman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 10:18:41 by mgoulman          #+#    #+#             */
/*   Updated: 2018/10/18 15:57:57 by mgoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while (s1[i] == s2[i] && 0 < n)
	{
		if (s1[i] == '\0' || s2[i] == '\0')
			return (0);
		i++;
		n--;
	}
	if (s1[i] != s2[i] && 0 < n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}
