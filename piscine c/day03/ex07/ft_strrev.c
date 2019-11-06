/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgoulman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 23:43:31 by mgoulman          #+#    #+#             */
/*   Updated: 2018/09/04 08:28:10 by mgoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	int		size;
	char	temp;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	size = i;
	i--;
	j = 0;
	while (j < size / 2)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		j++;
		i--;
	}
	return (str);
}
