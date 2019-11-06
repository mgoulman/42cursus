/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgoulman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 18:07:26 by mgoulman          #+#    #+#             */
/*   Updated: 2018/09/08 14:40:10 by mgoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int res;
	int i;

	i = 0;
	if (power < 0)
		res = 0;
	else
	{
		res = 1;
		while (i < power)
		{
			res = res * nb;
			i++;
		}
	}
	return (res);
}
