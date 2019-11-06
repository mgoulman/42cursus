/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlamhidr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 14:52:05 by hlamhidr          #+#    #+#             */
/*   Updated: 2018/10/15 12:04:25 by hlamhidr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*s1;
	int		i;

	if (!s || !f)
		return (NULL);
	i = ft_strlen(s);
	if (!(s1 = (char *)malloc(sizeof(char) * i + 1)))
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		s1[i] = f(s[i]);
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
