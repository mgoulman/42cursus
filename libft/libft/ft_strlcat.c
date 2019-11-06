/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgoulman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 13:38:24 by mgoulman          #+#    #+#             */
/*   Updated: 2018/10/18 14:30:03 by mgoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t len;
	size_t i;
	size_t j;

	i = ft_strlen(dst);
	len = i + ft_strlen(src);
	j = 0;
	if (i >= size)
		return (len - i + size);
	while (src[j] != '\0' && i < size - 1)
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (len);
}
