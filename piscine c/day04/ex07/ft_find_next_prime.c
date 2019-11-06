/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgoulman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 16:39:07 by mgoulman          #+#    #+#             */
/*   Updated: 2018/09/07 16:43:30 by mgoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	if (nb <= 1)
		return (0);
	else if (nb != 2 && nb % 2 == 0)
		return (0);
	else
	{
		i = 3;
		while (i <= nb / 2 && i <= 46340)
		{
			if (nb % i == 0)
				return (0);
			i += 2;
		}
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
		return (nb);
	else
		return (ft_find_next_prime(nb + 1));
}
