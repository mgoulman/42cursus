/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgoulman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 15:01:26 by mgoulman          #+#    #+#             */
/*   Updated: 2019/08/03 21:52:32 by mgoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/get_next_line.h"

int		my_fct(int fd, char *str[4864], char **line)
{
	int i;

	i = 0;
	while (str[fd][i] != '\n' && str[fd][i] != '\0')
		i++;
	if (ft_strlen(str[fd]))
	{
		if (str[fd][i] == '\0')
		{
			*line = ft_strdup(str[fd]);
			str[fd] = str[fd] + i;
			return (1);
		}
		str[fd][i++] = '\0';
		*line = ft_strdup(str[fd]);
		str[fd] = str[fd] + i;
		return (1);
	}
	return (0);
}

int		get_next_line(const int fd, char **line)
{
	static char	*str[4864];
	char		buf[BUFF_SIZE + 1];
	int			i;

	i = 0;
	if (fd < 0 || !line || BUFF_SIZE < 0 || read(fd, buf, 0) < 0)
		return (-1);
	if (str[fd] == NULL)
		str[fd] = ft_strnew(0);
	while ((i = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[i] = '\0';
		str[fd] = ft_strjoin(str[fd], buf);
		if (ft_strchr(buf, '\n'))
			break ;
	}
	return (my_fct(fd, str, line));
}
