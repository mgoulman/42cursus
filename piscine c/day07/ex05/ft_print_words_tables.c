/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgoulman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 14:22:10 by mgoulman          #+#    #+#             */
/*   Updated: 2018/09/19 14:23:12 by mgoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_words_tables(char **tab)
{
	int	index;
	int	i;

	index = 0;
	while (tab[index])
	{
		i = 0;
		while (tab[index][i])
		{
			ft_putchar(tab[index][i]);
			i++;
		}
		ft_putchar('\n');
		index++;
	}
}
