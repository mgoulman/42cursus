/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_file.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgoulman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 15:06:05 by mgoulman          #+#    #+#             */
/*   Updated: 2019/10/06 17:30:28 by mgoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

int				ft_check(t_mlx *fdf)
{
	char	*tmp;
	int		v1;
	int		t;
	int		fd;

	if ((fd = open(fdf->name, O_RDWR)) < 0)
	{
		ft_putendl("usage: ./fdf file");
		exit(0);
	}
	if (!(get_next_line(fd, &tmp)))
		return (0);
	v1 = len_line(tmp);
	ft_strdel(&tmp);
	t = 1;
	if (v1 == 0)
	{
		ft_putendl("error");
		exit(1);
	}
	while (get_next_line(fd, &tmp))
		help_check(v1, &t, tmp);
	close(fd);
	return (t);
}

void			fill_tab(t_mlx *fdf, int i, char *gnl)
{
	int	j;

	j = 0;
	while (j < len_line(gnl))
	{
		fdf->tab[i][j].y = i * 30;
		fdf->tab[i][j].x = j * 30;
		fdf->tab[i][j].z = ft_atoi(fdf->tmp[j]);
		if (fdf->tab[i][j].z)
			fdf->tab[i][j].color = 0xFFFFFF;
		else
			fdf->tab[i][j].color = 0xFF0000;
		j++;
	}
}

t_point			**ft_stock_cord(t_mlx *fdf)
{
	char	*gnl;
	int		i;
	int		fd;

	fd = open(fdf->name, O_RDONLY);
	if (!(fdf->tab = (t_point**)malloc(sizeof(t_point *) * fdf->t1)))
		return (NULL);
	i = 0;
	while (get_next_line(fd, &gnl))
	{
		if (!(fdf->tmp = ft_split_whitespaces(gnl)))
			return (NULL);
		if (!(fdf->tab[i] = malloc(sizeof(t_point) * len_line(gnl))))
			return (NULL);
		fill_tab(fdf, i, gnl);
		ft_free_tab(fdf->tmp);
		ft_strdel(&gnl);
		i++;
	}
	close(fd);
	return (fdf->tab);
}

void			fill_tab_copie(t_mlx *fdf, int i, char *gnl)
{
	int	j;

	j = 0;
	while (j < len_line(gnl))
	{
		fdf->tab_cop[i][j].y = fdf->tab[i][j].y;
		fdf->tab_cop[i][j].x = fdf->tab[i][j].x;
		fdf->tab_cop[i][j].z = fdf->tab[i][j].z;
		fdf->tab_cop[i][j].color = fdf->tab[i][j].color;
		j++;
	}
}

t_point			**ft_stock_cord_copie(t_mlx *fdf)
{
	char	*gnl;
	int		i;
	int		fd;

	fd = open(fdf->name, O_RDONLY);
	if (!(fdf->tab_cop = (t_point**)malloc(sizeof(t_point *) * fdf->t1)))
		return (NULL);
	i = 0;
	while (get_next_line(fd, &gnl))
	{
		if (!(fdf->tmp = ft_split_whitespaces(gnl)))
			return (NULL);
		if (!(fdf->tab_cop[i] = malloc(sizeof(t_point) * len_line(gnl))))
			return (NULL);
		fill_tab_copie(fdf, i, gnl);
		ft_free_tab(fdf->tmp);
		ft_strdel(&gnl);
		i++;
	}
	close(fd);
	return (fdf->tab_cop);
}
