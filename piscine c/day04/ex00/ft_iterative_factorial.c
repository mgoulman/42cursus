/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgoulman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 12:48:55 by mgoulman          #+#    #+#             */
/*   Updated: 2018/09/05 12:56:30 by mgoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int res;

	if (nb == 0)
		return (1);
	else if (nb < 0 || nb > 12)
		return (0);
	else
	{
		res = 1;
		while (nb > 0)
		{
			res = res * nb;
			nb--;
		}
		return (res);
	}
}
