/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgoulman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 21:43:18 by mgoulman          #+#    #+#             */
/*   Updated: 2019/08/04 18:54:55 by mgoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

int		*len_lines(t_mlx *fdf)
{
	int		fd;
	int		*r;
	int		i;
	char	*line;

	i = 0;
	r = malloc(sizeof(int) * fdf->t1);
	fd = open(fdf->name, O_RDONLY);
	while (get_next_line(fd, &line))
	{
		r[i] = len_line(line);
		i++;
		ft_strdel(&line);
	}
	return (r);
}

int		len_line(char *str)
{
	int i;
	int c;
	int j;

	j = 0;
	c = 0;
	i = 0;
	while (str[i])
	{
		while ((str[i] == ' ' || str[i] == '\t') && str[i])
			i++;
		if (str[i])
		{
			c++;
			while (str[i] != '\t' && str[i] != ' ' && str[i])
				i++;
		}
	}
	return (c);
}

void	move_hor(int key, t_mlx *fdf)
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
			if (key == 124)
			{
				fdf->tab[i][j].x += 10;
				fdf->tab_cop[i][j].x += 10;
			}
			else
			{
				fdf->tab[i][j].x -= 10;
				fdf->tab_cop[i][j].x -= 10;
			}
			j++;
		}
		i++;
	}
	draw(fdf);
}

void	move_ver(int key, t_mlx *fdf)
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
			if (key == 126)
			{
				fdf->tab[i][j].y -= 10;
				fdf->tab_cop[i][j].y -= 10;
			}
			else
			{
				fdf->tab[i][j].y += 10;
				fdf->tab_cop[i][j].y += 10;
			}
			j++;
		}
		i++;
	}
	draw(fdf);
}

void	move(int key, t_mlx *fdf)
{
	if (key == 124 || key == 123)
		move_hor(key, fdf);
	if (key == 126 || key == 125)
		move_ver(key, fdf);
}
