/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:43:53 by luntiet-          #+#    #+#             */
/*   Updated: 2022/11/03 14:11:37 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_get_line(char *buff)
{
	unsigned int	i;
	char			*line;

	i = 0;
	if (!buff[i])
		return (NULL);
	while (buff[i] != '\n' && buff[i] != '\0')
		i++;
	line = malloc((i + 2));
	if (!line)
		return (NULL);
	i = 0;
	while (buff[i] != '\n' && buff[i] != '\0')
	{
		line[i] = buff[i];
		i++;
	}
	if (buff[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return (line);
}

char	*ft_readbuff(int fd, char *buff)
{
	long	byte_size;
	char	*tmp;

	tmp = malloc(BUFFER_SIZE + 1);
	if (!tmp)
		return (NULL);
	byte_size = 1;
	while (!ft_strchr(buff, '\n') && byte_size != 0)
	{
		byte_size = read(fd, tmp, BUFFER_SIZE);
		if (byte_size == -1)
			return (free(buff), free(tmp), NULL);
		tmp[byte_size] = '\0';
		buff = ft_strjoin(buff, tmp);
	}
	free(tmp);
	return (buff);
}

char	*ft_buffer(char *buff)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	if (!buff)
		return (NULL);
	while (buff[i] != '\n' && buff[i] != '\0')
		i++;
	if (!buff[i])
		return (free(buff), NULL);
	str = (char *)malloc(ft_strlen(buff) - i + 1);
	if (!str)
		return (NULL);
	i++;
	while (buff[i])
		str[j++] = buff[i++];
	str[j] = '\0';
	free(buff);
	return (str);
}

char	*get_next_line(int fd)
{
	static char	*buff;
	char		*line;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (free(buff), NULL);
	buff = ft_readbuff(fd, buff);
	if (!buff)
		return (NULL);
	line = ft_get_line(buff);
	buff = ft_buffer(buff);
	return (line);
}
