/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgoulman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 15:57:52 by mgoulman          #+#    #+#             */
/*   Updated: 2018/09/15 16:03:31 by mgoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_arg(char const *c)
{
	int j;

	j = 0;
	while (c[j] != '\0')
	{
		ft_putchar(c[j]);
		j++;
	}
	ft_putchar('\n');
}

int		ft_strcmp(char const *s1, char const *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_swap(int *a, int *b)
{
	int c;

	if (a && b)
	{
		c = *a;
		*a = *b;
		*b = c;
	}
}

int		main(int argc, char const *argv[])
{
	int i;
	int j;
	int k;
	int arg[argc];

	i = 1;
	while (i < argc)
	{
		arg[i] = i;
		i++;
	}
	j = 1;
	while (j < argc)
	{
		k = j;
		while (k < argc)
		{
			if (ft_strcmp(argv[arg[j]], argv[arg[k]]) > 0)
				ft_swap(&arg[j], &arg[k]);
			k++;
		}
		ft_print_arg(argv[arg[j++]]);
	}
	return (0);
}
