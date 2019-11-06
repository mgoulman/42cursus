/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaqqa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 11:26:47 by aeddaqqa          #+#    #+#             */
/*   Updated: 2019/04/09 19:26:32 by aeddaqqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *fraiche;

	fraiche = 0;
	fraiche = (char *)malloc(sizeof(char) * size + 1);
	if (fraiche == NULL)
		return (NULL);
	ft_memset(fraiche, 0, size + 1);
	return (fraiche);
}
