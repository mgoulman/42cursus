/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgoulman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 11:42:10 by mgoulman          #+#    #+#             */
/*   Updated: 2018/10/20 14:16:13 by mgoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	int		k;
	int		l;
	char	*tmp;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	k = ft_strlen(s1);
	l = ft_strlen(s2);
	if (!(tmp = (char *)malloc(sizeof(char) * (k + l + 1))))
		return (NULL);
	ft_strcpy(tmp, s1);
	ft_strcat(tmp, s2);
	return (tmp);
}
