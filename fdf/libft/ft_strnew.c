/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgoulman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 09:26:57 by mgoulman          #+#    #+#             */
/*   Updated: 2018/10/19 12:25:20 by mgoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t			i;
	unsigned char	*s;

	i = 0;
	if (!(s = (unsigned char *)malloc(size + 1)))
		return (NULL);
	while (i <= size)
		s[i++] = 0;
	return ((char *)s);
}
