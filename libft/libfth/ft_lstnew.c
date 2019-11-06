/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlamhidr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 17:14:27 by hlamhidr          #+#    #+#             */
/*   Updated: 2018/10/25 22:25:32 by mgoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *ma;

	if (!(ma = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	ma->next = NULL;
	if (content == NULL)
	{
		ma->content = NULL;
		ma->content_size = 0;
	}
	else
	{
		ma->content = malloc(content_size);
		if (ma->content == NULL)
		{
			free(ma);
			return (NULL);
		}
		ft_memmove(ma->content, content, content_size);
		ma->content_size = content_size;
	}
	return (ma);
}

int	main()
{
	char const *cnt;
	size_t cnt_s;
	t_list	*mok;

	cnt = "1337";
	cnt_s = 50;

	mok = ft_lstnew(cnt, cnt_s);
	ft_putstr(mok->content);
	return (0);
}
