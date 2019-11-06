/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlamhidr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 18:36:20 by hlamhidr          #+#    #+#             */
/*   Updated: 2018/10/10 17:58:31 by hlamhidr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int i;
	int negatif;
	int k;
	int result;

	i = 0;
	negatif = 0;
	result = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v'
			|| str[i] == '\r' || str[i] == '\f' || str[i] == '\n')
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			negatif = 1;
	k = str[i] - '0';
	while (k >= 0 && k <= 9 && str[i] != '\0')
	{
		result = result * 10 + k;
		i++;
		k = str[i] - '0';
	}
	if (negatif)
		result *= -1;
	return (result);
}
