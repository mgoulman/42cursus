/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaqqa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 08:44:11 by aeddaqqa          #+#    #+#             */
/*   Updated: 2019/04/09 19:10:07 by aeddaqqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*fraiche;

	if (!s2)
		return (0);
	if (s1)
	{
		i = 0;
		j = 0;
		fraiche = (char *)malloc(sizeof(*fraiche)
				* (ft_strlen(s1) + ft_strlen(s2)) + 1);
		if (fraiche == NULL)
			return (NULL);
		while (s1[i])
		{
			fraiche[i] = (char)s1[i];
			i++;
		}
		while (s2[j])
			fraiche[i++] = (char)s2[j++];
		fraiche[i] = '\0';
		return (fraiche);
	}
	return (0);
}
