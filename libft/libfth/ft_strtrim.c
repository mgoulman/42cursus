/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlamhidr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 10:54:34 by hlamhidr          #+#    #+#             */
/*   Updated: 2018/10/15 20:54:20 by hlamhidr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*c;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	j = ft_strlen(s);
	i = 0;
	while ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n') && s[i])
		i++;
	if (i == j)
	{
		if (!(c = (char *)malloc(sizeof(char))))
			return (NULL);
		c[0] = '\0';
		return (c);
	}
	j -= 1;
	while ((s[j] == ' ' || s[j] == '\t' || s[j] == '\n') && j != -1)
		j--;
	if (!(c = ft_strsub(s, i, j - i + 1)))
		return (NULL);
	return (c);
}
