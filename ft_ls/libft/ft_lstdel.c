/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaqqa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 04:17:31 by aeddaqqa          #+#    #+#             */
/*   Updated: 2019/04/09 19:39:10 by aeddaqqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list *frais;

	frais = (*alst);
	while (frais != NULL)
	{
		ft_lstdelone(alst, del);
		*alst = frais->next;
		frais = (*alst);
	}
}
