/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_line.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgoulman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 15:05:26 by mgoulman          #+#    #+#             */
/*   Updated: 2019/10/06 17:30:02 by mgoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"
#define B 0xFFFFFF
#define P p1.color

void	max_x(t_brs t, void *mlx_ptr, void *win_ptr, int color)
{
	int		i;
	int		ax;
	int		ay;

	i = -1;
	ax = 2 * t.dx;
	ay = 2 * t.dy;
	t.p0 = (2 * t.dy) - t.dx;
	while (++i < t.dx)
	{
		if (t.p0 > 0)
		{
			t.xbrs += t.xinc;
			t.ybrs += t.yinc;
			t.p0 += ay - ax;
		}
		else
		{
			t.xbrs += t.xinc;
			t.p0 += ay;
		}
		mlx_pixel_put(mlx_ptr, win_ptr, t.xbrs + 250, t.ybrs + 250, color);
	}
}

void	max_y(t_brs t, void *mlx_ptr, void *win_ptr, int color)
{
	int		i;
	int		ax;
	int		ay;

	i = -1;
	ax = 2 * t.dx;
	ay = 2 * t.dy;
	t.p0 = (2 * t.dx) - t.dy;
	while (++i < t.dy)
	{
		if (t.p0 > 0)
		{
			t.ybrs += t.yinc;
			t.xbrs += t.xinc;
			t.p0 += ax - ay;
		}
		else
		{
			t.ybrs += t.yinc;
			t.p0 += ax;
		}
		mlx_pixel_put(mlx_ptr, win_ptr, t.xbrs + 250, t.ybrs + 250, color);
	}
}

void	draw_line(t_point p1, t_point p2, t_mlx *fdf)
{
	t_brs	t;
	int		color;

	t.dx = p2.x - p1.x;
	t.dy = p2.y - p1.y;
	t.xbrs = p1.x;
	t.ybrs = p1.y;
	t.xinc = (t.dx > 0) ? 1 : -1;
	t.yinc = (t.dy > 0) ? 1 : -1;
	t.dx = abs(t.dx);
	t.dy = abs(t.dy);
	color = ((p1.z || p2.z) ? 0xFFFFFF : 0XFF0000);
	mlx_pixel_put(fdf->mlx_ptr, fdf->win_ptr, t.xbrs + 250, t.ybrs + 250, P);
	if (t.dx > t.dy)
		max_x(t, fdf->mlx_ptr, fdf->win_ptr, color);
	else
		max_y(t, fdf->mlx_ptr, fdf->win_ptr, color);
}

void	help_draw(t_mlx *fdf, int i)
{
	int j;

	while (i < fdf->t1)
	{
		j = 0;
		while (j < fdf->t2[i])
		{
			if (fdf->draw == 0)
			{
				if (j + 1 < fdf->t2[i])
					draw_line(fdf->tab[i][j], fdf->tab[i][j + 1], fdf);
				if (i + 1 < fdf->t1)
					draw_line(fdf->tab[i][j], fdf->tab[i + 1][j], fdf);
			}
			else
			{
				if (j + 1 < fdf->t2[i])
					draw_line(fdf->tab_cop[i][j], fdf->tab_cop[i][j + 1], fdf);
				if (i + 1 < fdf->t1)
					draw_line(fdf->tab_cop[i][j], fdf->tab_cop[i + 1][j], fdf);
			}
			j++;
		}
		i++;
	}
}

void	draw(t_mlx *fdf)
{
	int i;

	i = 0;
	help_draw(fdf, i);
	mlx_string_put(fdf->mlx_ptr, fdf->win_ptr, 50, 50, B, "EXIT : esc");
	mlx_string_put(fdf->mlx_ptr, fdf->win_ptr, 250, 50, B, "ZOOM : - / +");
	mlx_string_put(fdf->mlx_ptr, fdf->win_ptr, 450, 50, B, "HAUTEUR : A / D");
	mlx_string_put(fdf->mlx_ptr, fdf->win_ptr, 650, 50, B, "MOOV : fleches");
	mlx_string_put(fdf->mlx_ptr, fdf->win_ptr, 850, 50, B, "ISO : I / O");
}
