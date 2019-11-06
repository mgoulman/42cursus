/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaqqa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 10:07:14 by aeddaqqa          #+#    #+#             */
/*   Updated: 2019/04/09 18:45:17 by aeddaqqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *fraiche;

	fraiche = 0;
	if (size > 0)
	{
		fraiche = (void *)malloc(sizeof(*fraiche) * size);
		if (fraiche == NULL)
			return (NULL);
		ft_bzero(fraiche, size);
	}
	return (fraiche);
}
