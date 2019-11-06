/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgoulman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 11:22:18 by mgoulman          #+#    #+#             */
/*   Updated: 2018/10/20 16:23:00 by mgoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	k;
	size_t	p;
	char	*tmp;

	i = 0;
	p = 0;
	if (s == NULL)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	k = ft_strlen(s);
	if (i == k)
	{
		tmp = (char *)malloc(sizeof(char));
		tmp[0] = '\0';
		return (tmp);
	}
	k -= 1;
	while (s[k] == ' ' || s[k] == '\n' || s[k] == '\t')
		k--;
	tmp = ft_strsub(s, i, (k - i + 1));
	return (tmp);
}
