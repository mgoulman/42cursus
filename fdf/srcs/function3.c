/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgoulman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 20:41:31 by mgoulman          #+#    #+#             */
/*   Updated: 2019/08/04 18:57:19 by mgoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

void	help_check(int v1, int *t, char *tmp)
{
	int v2;

	v2 = len_line(tmp);
	*t += 1;
	ft_strdel(&tmp);
	if (v2 < v1)
	{
		ft_putendl("error");
		exit(0);
	}
}

void	help_zoom(t_mlx *fdf, int i, int j)
{
	fdf->tab[i][j].x /= 1.1;
	fdf->tab[i][j].y /= 1.1;
	fdf->tab_cop[i][j].x /= 1.1;
	fdf->tab_cop[i][j].y /= 1.1;
}

void	zoom(int key, t_mlx *fdf)
{
	int i;
	int j;

	i = 0;
	mlx_clear_window(fdf->mlx_ptr, fdf->win_ptr);
	while (i < fdf->t1)
	{
		j = 0;
		while (j < fdf->t2[i])
		{
			if (key == 69)
			{
				fdf->tab[i][j].x *= 1.1;
				fdf->tab[i][j].y *= 1.1;
				fdf->tab_cop[i][j].x *= 1.1;
				fdf->tab_cop[i][j].y *= 1.1;
			}
			if (key == 78)
				help_zoom(fdf, i, j);
			j++;
		}
		i++;
	}
	draw(fdf);
}

void	ft_free_tab(char **tab)
{
	int i;

	i = 0;
	while (tab[i])
	{
		if (tab[i])
		{
			free(tab[i]);
			tab[i] = NULL;
		}
		i++;
	}
	if (tab)
	{
		free(tab);
		tab = NULL;
	}
}
