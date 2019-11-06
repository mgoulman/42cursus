/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlamhidr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 09:35:49 by hlamhidr          #+#    #+#             */
/*   Updated: 2018/10/15 12:29:43 by hlamhidr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strcnlen(int n)
{
	int k;

	k = 0;
	while (n > 9 || n < 0)
	{
		n = n / 10;
		k++;
	}
	return (k);
}

static char	*ft_negative(int n, char *fraiche, int k)
{
	while (k > 0)
	{
		fraiche[k--] = '0' - (n % 10);
		n = n / 10;
		fraiche[0] = '-';
	}
	return (fraiche);
}

char		*ft_itoa(int n)
{
	char	*fraiche;
	int		k;
	int		p;

	k = ft_strcnlen(n);
	p = k;
	if (!(fraiche = (char *)malloc(sizeof(char) * k + 2)))
		return (NULL);
	if (n < 0)
	{
		ft_negative(n, fraiche, k);
	}
	else
	{
		while (k >= 0)
		{
			fraiche[k--] = (n % 10) + '0';
			n = n / 10;
		}
	}
	fraiche[p + 1] = '\0';
	return (fraiche);
}
