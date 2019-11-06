/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgoulman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 12:05:17 by mgoulman          #+#    #+#             */
/*   Updated: 2018/09/19 14:18:54 by mgoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_number(char *str)
{
	int i;
	int j;
	int k;

	j = 0;
	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		{
			if ((str[i + 1] != ' ' || str[i + 1] != '\n' || str[i + 1] != '\t'))
				j++;
		}
		i++;
	}
	return (j);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	**ft_print(char *str, char **s, int v)
{
	int i;
	int k;
	int j;

	i = 0;
	k = 0;
	while (i < v)
	{
		j = 0;
		while (str[i] != ' ' && str[i] != '\n'
				&& str[i] != '\t' && str[i] != '\0')
			s[k][j++] = str[i++];
		while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
			i++;
		if (j > 0)
		{
			s[k][j] = '\0';
			k++;
		}
	}
	s[k] = 0;
	return (s);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		v;
	char	**s;

	v = ft_strlen(str);
	j = ft_number(str);
	s = malloc((j + 1) * sizeof(char**));
	i = 0;
	while (i < j)
		s[i++] = malloc(v * sizeof(char*));
	s = ft_print(str, s, v);
	return (s);
}
