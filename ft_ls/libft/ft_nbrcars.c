/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrcars.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaqqa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 15:53:53 by aeddaqqa          #+#    #+#             */
/*   Updated: 2019/04/09 15:54:44 by aeddaqqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_nbrcars(char *str, unsigned int i, char c)
{
	int	k;

	k = 0;
	if (str)
	{
		if (!*str)
			return (0);
		while (str[i] != c && str[i])
		{
			k++;
			i++;
		}
	}
	return (k);
}
