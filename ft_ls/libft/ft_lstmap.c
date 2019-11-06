/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaqqa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 06:45:45 by aeddaqqa          #+#    #+#             */
/*   Updated: 2019/04/13 16:00:53 by aeddaqqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *fraiche;
	t_list *tmp;

	if (lst == NULL)
		return (NULL);
	tmp = ft_lstnew(f(lst)->content, f(lst)->content_size);
	fraiche = tmp;
	while (lst->next)
	{
		tmp->next = ft_lstnew(f(lst->next)->content,
				f(lst->next)->content_size);
		tmp = tmp->next;
		lst = lst->next;
	}
	return (fraiche);
}
