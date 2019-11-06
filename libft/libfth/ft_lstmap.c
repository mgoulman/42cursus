/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlamhidr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 14:32:15 by hlamhidr          #+#    #+#             */
/*   Updated: 2018/10/14 22:52:42 by hlamhidr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*begin;
	t_list	*fr;

	if (!lst || !f)
		return (NULL);
	fr = f(lst);
	begin = fr;
	lst = lst->next;
	while (lst != NULL)
	{
		fr->next = f(lst);
		fr = fr->next;
		lst = lst->next;
	}
	fr->next = NULL;
	return (begin);
}
