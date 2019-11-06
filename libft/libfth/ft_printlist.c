/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printlist.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlamhidr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/15 14:25:54 by hlamhidr          #+#    #+#             */
/*   Updated: 2018/10/15 14:43:19 by hlamhidr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define INT 1
#define CHAR 2
#define STRING 3

void	ft_printlist(t_list *list, int type)
{
	while (list != NULL)
	{
		if (type == INT)
			ft_putnbr((int)list->content);
		else if (type == CHAR)
			ft_putchar((char)list->content);
		else if (type == STRING)
			ft_putstr((char *)list->content);
		ft_putstr("\n");
		list = list->next;
	}
}
