/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgoulman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 16:03:19 by mgoulman          #+#    #+#             */
/*   Updated: 2018/09/17 17:39:57 by mgoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *nbr;

	i = 0;
	if (min >= max)
		return (0);
	nbr = malloc(sizeof(*nbr) * (max - min));
	while (min < max)
	{
		nbr[i] = min;
		min++;
		i++;
	}
	return (nbr);
}
