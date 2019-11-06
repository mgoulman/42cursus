/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaqqa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 02:37:09 by aeddaqqa          #+#    #+#             */
/*   Updated: 2019/04/11 11:33:46 by aeddaqqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *frais;

	frais = (t_list *)malloc(sizeof(t_list));
	if (frais == NULL)
		return (NULL);
	if (content == NULL)
	{
		frais->content = NULL;
		frais->content_size = 0;
		frais->next = NULL;
		return (frais);
	}
	frais->content = (t_list *)malloc(sizeof(content_size));
	frais->content = ft_strcpy(frais->content, content);
	frais->content_size = content_size;
	frais->next = NULL;
	return (frais);
}
