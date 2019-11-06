/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaqqa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 11:22:24 by aeddaqqa          #+#    #+#             */
/*   Updated: 2019/04/09 19:51:39 by aeddaqqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstchr(t_list *e, void *x)
{
	t_list *p;

	p = e;
	if (e == NULL)
		return (0);
	while (p)
	{
		if (ft_strcmp((char *)p->content, (char *)x) == 0)
			return (p);
		p = p->next;
	}
	return (0);
}
