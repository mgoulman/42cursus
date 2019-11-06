/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgoulman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 09:25:00 by mgoulman          #+#    #+#             */
/*   Updated: 2018/11/11 14:55:12 by mgoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_sqrt(int nb)
{
	int i;

	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	else
	{
		i = 0;
		while (i <= 46340 && i <= nb / 2)
		{
			if (i * i == nb)
				return (i);
			i++;
		}
		return (0);
	}
}

int main()
{
	printf("%d", ft_sqrt(4));
}
