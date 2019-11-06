/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlamhidr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 18:22:12 by hlamhidr          #+#    #+#             */
/*   Updated: 2018/10/15 11:50:21 by hlamhidr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && 0 < n)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		n--;
		i++;
	}
	if (s1[i] != s2[i] && 0 < n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}
