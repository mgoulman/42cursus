/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgoulman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 14:19:17 by mgoulman          #+#    #+#             */
/*   Updated: 2018/10/03 14:26:17 by mgoulman         ###   ########.fr       */
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
