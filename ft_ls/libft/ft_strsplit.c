/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaqqa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 14:45:07 by aeddaqqa          #+#    #+#             */
/*   Updated: 2019/04/11 11:34:07 by aeddaqqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**t;

	i = 0;
	k = 0;
	t = NULL;
	if ((t = (char **)malloc(sizeof(char *) * ft_nbrmots((char *)s, c) + 1)))
	{
		while (k < ft_nbrmots((char *)s, c))
		{
			j = 0;
			while (s[i] == c)
				i++;
			t[k] = (char *)malloc(sizeof(char) * ft_nbrcars((char *)s,
						i, c) + 1);
			while (s[i] != c && s[i] != '\0')
				t[k][j++] = s[i++];
			t[k][j] = '\0';
			k++;
		}
		t[k] = NULL;
	}
	return (t);
}
