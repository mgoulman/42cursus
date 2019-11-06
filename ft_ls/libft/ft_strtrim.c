/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaqqa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 09:12:25 by aeddaqqa          #+#    #+#             */
/*   Updated: 2019/04/09 19:35:55 by aeddaqqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*allwtsp(void)
{
	char	*fraiche;

	fraiche = NULL;
	if ((fraiche = (char*)malloc(sizeof(char))) == NULL)
		return (NULL);
	*fraiche = '\0';
	return (fraiche);
}

char			*ft_strtrim(char const *s)
{
	char	*fraiche;
	int		i;
	int		j;
	int		r;

	if (s)
	{
		i = ft_strlen(s) - 1;
		j = 0;
		while (s[j] == '\n' || s[j] == '\t' || s[j] == ' ')
			j++;
		if (s[j] == '\0')
			return (allwtsp());
		while (s[i] == '\n' || s[i] == '\t' || s[i] == ' ')
			i--;
		if ((fraiche = (char *)malloc(sizeof(char) * (i - j +\
							1) + 1)) == NULL)
			return (NULL);
		r = 0;
		while (j <= i)
			fraiche[r++] = (char)s[j++];
		fraiche[r] = '\0';
		return (fraiche);
	}
	return (0);
}
