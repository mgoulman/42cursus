/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgoulman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 21:28:06 by mgoulman          #+#    #+#             */
/*   Updated: 2018/09/02 21:29:31 by mgoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar (char c);

void	ft_putnbr(int nb)
{
	if (nb >= 0 && nb < 10)
	{
		ft_putchar(nb + '0');
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
	else if (nb > -10)
	{
		ft_putchar('-');
		ft_putchar(nb * -1 + '0');
	}
	else
	{
		ft_putchar('-');
		ft_putnbr(-1 * (nb / 10));
		ft_putchar(-1 * (nb % 10) + '0');
	}
}
