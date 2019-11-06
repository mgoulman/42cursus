/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlamhidr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 10:29:02 by hlamhidr          #+#    #+#             */
/*   Updated: 2018/10/15 18:22:15 by hlamhidr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*fr;
	size_t	v;

	if (!s1 || !s2)
		return (NULL);
	v = ft_strlen(s1) + ft_strlen(s2);
	if (!(fr = (char *)malloc(sizeof(char) * v + 1)))
		return (NULL);
	ft_strcpy(fr, s1);
	ft_strcat(fr, s2);
	return (fr);
}
