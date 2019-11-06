/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaqqa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 16:31:37 by aeddaqqa          #+#    #+#             */
/*   Updated: 2019/09/17 14:27:45 by mgoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include "../libft/libft.h"
# include <stdio.h>
# include "get_next_line.h"
# include <mlx.h>
# include <math.h>

typedef struct	s_point
{
	double	x;
	double	y;
	double	z;
	int		color;
}				t_point;

typedef struct	s_brs
{
	int		xbrs;
	int		ybrs;
	int		dx;
	int		dy;
	int		p0;
	int		xinc;
	int		yinc;
	int		**tab;
}				t_brs;

typedef struct	s_mlx
{
	void	*mlx_ptr;
	void	*win_ptr;
	int		t1;
	int		*t2;
	char	*name;
	t_point	**tab;
	t_point	**tab_cop;
	char	**tmp;
	int		draw;
	int		sym;
	char	*t;
}				t_mlx;

void			help_check(int v1, int *t, char *tmp);
void			max_x(t_brs t, void *mlx_ptr, void *win_ptr, int color);
void			max_y(t_brs t, void *mlx_ptr, void *win_ptr, int color);
void			draw_line(t_point p1, t_point p2, t_mlx *fdf);
char			**ft_split_whitespaces(char *str);
int				ft_atoi_base(char *str, int base);
void			ft_free_tab(char **tab);
t_point			**ft_stock_cord(t_mlx *fdf);
t_point			**ft_stock_cord_copie(t_mlx *fdf);
char			*comma(char *str);
int				ft_check(t_mlx *fdf);
int				*len_lines(t_mlx *fdf);
int				len_line(char *str);
void			zoom(int key, t_mlx *fdf);
void			iso(double *x, double *y, double *z);
int				functions(int key, t_mlx *fdf);
void			draw(t_mlx *fdf);
void			move(int key, t_mlx *fdf);

#endif
