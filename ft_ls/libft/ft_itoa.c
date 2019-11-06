/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaqqa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 11:35:36 by aeddaqqa          #+#    #+#             */
/*   Updated: 2019/04/13 15:39:14 by aeddaqqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		part1(int n)
{
	int cmp;
	int k;

	if (n == 0)
		return (1);
	cmp = 0;
	k = n;
	while (k)
	{
		cmp++;
		k /= 10;
	}
	if (n < 0)
		cmp++;
	return (cmp);
}

char	*ft_itoa(int n)
{
	int		i;
	int		b;
	char	*fraiche;

	b = part1(n);
	i = part1(n) - 1;
	if (!(fraiche = (char *)malloc(sizeof(char) * b + 1)))
		return (NULL);
	if (n < 0)
		fraiche[0] = '-';
	fraiche[b] = '\0';
	if (!n)
		*fraiche = '0';
	while (n)
	{
		if (n > 0)
			fraiche[i] = n % 10 + '0';
		else
			fraiche[i] = -(n % 10) + '0';
		n /= 10;
		i--;
	}
	return (fraiche);
}
