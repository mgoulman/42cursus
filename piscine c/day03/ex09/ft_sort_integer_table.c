/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgoulman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 18:24:27 by mgoulman          #+#    #+#             */
/*   Updated: 2018/09/04 18:24:35 by mgoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}

void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int j;

	i = 0;
	while (i < size)
	{
		j = i;
		while (j < size)
		{
			if (tab[i] >= tab[j])
			{
				ft_swap(&tab[i], &tab[j]);
			}
			j++;
		}
		i++;
	}
}
