/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgoulman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 15:08:13 by mgoulman          #+#    #+#             */
/*   Updated: 2019/09/17 14:03:18 by mgoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

static void	ft_free(void **tab)
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

void		iso(double *x, double *y, double *z)
{
	int a;
	int b;

	a = *x;
	b = *y;
	*x = (a - b) * cos(0.523599);
	*y = (b + a) * sin(0.523599) - *z;
}

int			main(int argc, char **argv)
{
	t_mlx		fdf;

	if (argc != 2)
	{
		ft_putendl("usage: ./fdf file");
		exit(1);
	}
	fdf.name = argv[1];
	fdf.t1 = ft_check(&fdf);
	fdf.tab = ft_stock_cord(&fdf);
	fdf.t2 = len_lines(&fdf);
	fdf.mlx_ptr = mlx_init();
	fdf.win_ptr = mlx_new_window(fdf.mlx_ptr, 1000, 1000, "FDF");
	if (fdf.t1)
		draw(&fdf);
	fdf.tab_cop = ft_stock_cord_copie(&fdf);
	mlx_hook(fdf.win_ptr, 2, 1, functions, &fdf);
	mlx_loop(fdf.mlx_ptr);
	free(fdf.t2);
	ft_free((void **)fdf.tab);
	ft_free((void **)fdf.tab_cop);
	return (0);
}
