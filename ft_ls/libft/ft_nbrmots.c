/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrmots.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaqqa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 15:52:49 by aeddaqqa          #+#    #+#             */
/*   Updated: 2019/04/09 15:55:01 by aeddaqqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_nbrmots(char *str, char c)
{
	int	i;
	int	cmp;

	i = 0;
	cmp = 0;
	if (str)
	{
		if (!*str)
			return (0);
		if (str[i] != c)
			cmp = 1;
		while (str[i])
		{
			if (str[i] == c && str[i + 1] != c && str[i + 1] != '\0')
				cmp++;
			i++;
		}
	}
	return (cmp);
}
