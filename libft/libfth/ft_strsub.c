/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlamhidr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 21:53:29 by hlamhidr          #+#    #+#             */
/*   Updated: 2018/10/14 19:20:53 by hlamhidr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*fr;
	size_t	i;

	if (!s)
		return (NULL);
	if (!(fr = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	i = 0;
	while (len > i)
		fr[i++] = s[start++];
	fr[i] = '\0';
	return (fr);
}
