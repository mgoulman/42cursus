/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgoulman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 09:41:01 by mgoulman          #+#    #+#             */
/*   Updated: 2018/09/19 15:39:01 by mgoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_concat_params(int argc, char **argv)
{
	char	*unique;
	int		i;
	int		j;
	int		o;

	unique = malloc((argc) * sizeof(char));
	i = 1;
	o = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			unique[o] = argv[i][j];
			o++;
			j++;
		}
		if ((i - 1) < argc)
			unique[o] = '\n';
		o++;
		i++;
	}
	unique[o - 1] = '\0';
	return (unique);
}
