/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgoulman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 14:51:03 by mgoulman          #+#    #+#             */
/*   Updated: 2018/10/14 11:00:53 by mgoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	if (n >= 0 && n < 10)
	{
		ft_putchar(n + '0');
	}
	else if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else if (n > -10)
	{
		ft_putchar('-');
		ft_putchar(-1 * n + '0');
	}
	else
	{
		ft_putchar('-');
		ft_putnbr(-1 * (n / 10));
		ft_putnbr(n % 10 * -1);
	}
}
