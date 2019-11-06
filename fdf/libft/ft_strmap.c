/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgoulman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 14:33:42 by mgoulman          #+#    #+#             */
/*   Updated: 2018/10/20 13:31:52 by mgoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	int		j;
	char	*p;

	i = 0;
	if (!s || !f)
		return (NULL);
	j = ft_strlen(s);
	if (!(p = (char *)malloc(sizeof(char) * (j + 1))))
		return (NULL);
	while (s[i] != '\0')
	{
		p[i] = f(s[i]);
		i++;
	}
	p[i] = '\0';
	return (p);
}
