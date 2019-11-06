/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgoulman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 14:04:39 by mgoulman          #+#    #+#             */
/*   Updated: 2019/08/03 22:33:20 by mgoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

void	hauteur(int key, t_mlx *fdf)
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
			if (key == 0)
				fdf->tab[i][j].y -= fdf->tab[i][j].z;
			else
				fdf->tab[i][j].y += fdf->tab[i][j].z;
			j++;
		}
		i++;
	}
	draw(fdf);
}

void	help_iiso(t_mlx *fdf, int i)
{
	int j;

	if (fdf->sym == 0)
	{
		while (i < fdf->t1)
		{
			j = 0;
			while (j < fdf->t2[i])
			{
				iso(&fdf->tab[i][j].x, &fdf->tab[i][j].y, &fdf->tab[i][j].z);
				j++;
			}
			i++;
			fdf->sym++;
		}
	}
}

void	iiso(int key, t_mlx *fdf)
{
	int i;

	i = 0;
	mlx_clear_window(fdf->mlx_ptr, fdf->win_ptr);
	if (key == 34)
	{
		fdf->draw = 0;
		help_iiso(fdf, i);
		draw(fdf);
	}
	else
	{
		fdf->draw = 1;
		draw(fdf);
	}
}

int		functions(int key, t_mlx *fdf)
{
	if (key == 53)
		exit(1);
	if (key == 69 || key == 78)
		zoom(key, fdf);
	if (key == 123 || key == 124 || key == 125 || key == 126)
		move(key, fdf);
	if (key == 0 || key == 2)
		hauteur(key, fdf);
	if (key == 34 || key == 31)
		iiso(key, fdf);
	return (0);
}
