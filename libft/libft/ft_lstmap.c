/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgoulman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 13:51:30 by mgoulman          #+#    #+#             */
/*   Updated: 2018/10/24 14:09:14 by mgoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *p;

	if (!lst || !f)
		return (NULL);
	p = f(lst);
	new = p;
	lst = lst->next;
	while (lst != NULL)
	{
		p->next = f(lst);
		p = p->next;
		lst = lst->next;
	}
	p->next = NULL;
	return (new);
}
