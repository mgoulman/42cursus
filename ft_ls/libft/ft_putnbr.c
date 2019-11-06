/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaqqa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 11:50:57 by aeddaqqa          #+#    #+#             */
/*   Updated: 2019/03/28 14:32:28 by aeddaqqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	if (n >= 0 && n <= 9)
		ft_putchar('0' + n);
	else if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
	else if (n < 0 && n >= (-9))
	{
		ft_putchar('-');
		ft_putchar(-1 * n + '0');
	}
	else if (n <= (-10))
	{
		ft_putchar('-');
		ft_putnbr(-1 * (n / 10));
		ft_putchar(-1 * (n % 10) + '0');
	}
}
