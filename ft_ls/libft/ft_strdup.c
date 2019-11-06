/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaqqa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/26 19:02:50 by aeddaqqa          #+#    #+#             */
/*   Updated: 2019/04/09 19:02:56 by aeddaqqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *str)
{
	char	*tab;
	int		i;
	char	*s;

	s = (char *)str;
	i = 0;
	while (s[i])
		i++;
	if ((tab = (char *)malloc(sizeof(*tab) * (i + 1))) == NULL)
		return (0);
	i = 0;
	while (s[i])
	{
		tab[i] = (char)s[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
