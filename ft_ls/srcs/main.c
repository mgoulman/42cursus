/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgoulman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 15:42:43 by mgoulman          #+#    #+#             */
/*   Updated: 2019/10/10 15:35:20 by mgoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_ls.h"

void	option_l(char **av)
{
	//int	inf = 0;
	struct stat *buf;
	struct passwd *pwd;


	buf = NULL;
	while (stat(av[2], buf))
	{
		printf("khdem t9awed\n");
		pwd = getpwuid(buf->st_uid);
		ft_putstr(pwd->pw_name);
		ft_putstr("\n");
	}
}

void	check_behind(char **av)
{
	int i;

	i = 1;
	if (av[1][i] == 'l')
	{
		option_l(av);
	}
}

int	main(int ac, char **av)
{
	DIR		*drip;
	struct	dirent *entry;
	int		i;
	int		j;
	int		count;

	count = 0;
	j = 0;
	if (ac == 1)
	{
		drip = opendir(".");
		while ((entry = readdir(drip)))
		{
			ft_putstr(entry->d_name);
			ft_putchar('\t');
		}	
	}
	i = 1;
	if (ac >  1)
	{
		if (av[1][0] == '-')
		{
			check_behind(av);
			i = 2;
		}
		while (av[i])
		{
			drip =  opendir(av[i]);
			ft_putstr(av[i]);
			ft_putstr(":\n");
			while ((entry = readdir(drip)))
			{
				ft_putstr(entry->d_name);
				ft_putchar('\t');
			}
			ft_putstr("\n\n");
			i++;
		}
	}
	closedir(drip);
	return (0);
}
