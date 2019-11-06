/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaqqa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 10:56:04 by aeddaqqa          #+#    #+#             */
/*   Updated: 2019/04/09 11:13:59 by aeddaqqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstprint(t_list *e)
{
	t_list *p;

	p = e;
	while (p)
	{
		ft_putnbr(p->content_size);
		ft_putstr(p->content);
		ft_putchar('\n');
		p = p->next;
	}
}
