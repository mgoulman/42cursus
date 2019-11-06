/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgoulman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 21:58:34 by mgoulman          #+#    #+#             */
/*   Updated: 2018/09/02 22:02:52 by mgoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	line(char c1, char c2, char c3, int x)
{
	int i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
		{
			ft_putchar(c1);
		}
		else if (i == x)
		{
			ft_putchar(c2);
		}
		else
		{
			ft_putchar(c3);
		}
		i++;
	}
}

void	rush(int x, int y)
{
	int j;

	if (y < 0)
		return ;
	j = 1;
	while (j <= y)
	{
		if (j == 1 || j == y)
		{
			line('A', 'C', 'B', x);
		}
		else
		{
			line('B', 'B', ' ', x);
		}
		j++;
		ft_putchar('\n');
	}
}
