/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaqqa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 03:53:33 by aeddaqqa          #+#    #+#             */
/*   Updated: 2019/04/09 19:14:20 by aeddaqqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*fraiche;
	int		i;
	char	*str;

	if (s)
	{
		str = (char *)s;
		i = 0;
		while (str[i])
			i++;
		fraiche = (char *)malloc(sizeof(*fraiche) * i + 1);
		if (fraiche == NULL)
			return (NULL);
		i = 0;
		while (str[i])
		{
			fraiche[i] = f(i, str[i]);
			i++;
		}
		fraiche[i] = '\0';
		return (fraiche);
	}
	return (0);
}
