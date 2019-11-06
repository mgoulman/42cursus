/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgoulman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 14:48:42 by mgoulman          #+#    #+#             */
/*   Updated: 2018/10/20 13:53:37 by mgoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbrlen(int f)
{
	int	i;

	i = 0;
	if (f < 0)
	{
		i++;
		f = f * (-1);
	}
	while (f != 0)
	{
		f = f / 10;
		i++;
	}
	return (i);
}

static char	*ft_putnbr_char(long f)
{
	char	*tmp;
	int		i;
	int		negative;

	negative = 0;
	i = ft_nbrlen(f);
	if (!(tmp = (char *)malloc(sizeof(char) * i + 1)))
		return (NULL);
	tmp[i] = '\0';
	if (f < 0)
	{
		negative = 1;
		f = f * (-1);
	}
	while (i > 0)
	{
		tmp[i - 1] = (f % 10) + '0';
		f = f / 10;
		i--;
	}
	if (negative == 1)
		tmp[i] = '-';
	return (tmp);
}

char		*ft_itoa(int n)
{
	char	*tmp;
	long	f;

	f = n;
	if (n != 0)
	{
		tmp = ft_putnbr_char(f);
		return (tmp);
	}
	if (n == 0)
	{
		return (ft_strdup("0"));
	}
	return (NULL);
}
