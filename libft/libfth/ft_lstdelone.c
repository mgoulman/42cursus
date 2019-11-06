/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlamhidr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 14:02:11 by hlamhidr          #+#    #+#             */
/*   Updated: 2018/10/25 23:15:44 by mgoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	del((*alst)->content, (*alst)->content_size);
	free(*alst);
	*alst = NULL;
}

void	*ft_zero(void *content, size_t content_size)
{
	ft_bzero(content, content_size);
	return NULL;
}

int main()
{
	t_list *lst;
	char const cnt[] = "1337";
	lst = ft_lstnew(cnt, 5);
	printf ("%s", lst->content);
	ft_lstdelone(&lst, ft_zero(lst->content, lst->content_size));
	printf ("%s", lst->content);
	return (0);
}
