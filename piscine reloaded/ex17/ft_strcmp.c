/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgoulman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 14:35:32 by mgoulman          #+#    #+#             */
/*   Updated: 2018/10/03 14:36:22 by mgoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}