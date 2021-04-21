/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvieira <lvieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 14:07:59 by lvieira           #+#    #+#             */
/*   Updated: 2021/04/16 16:58:45 by lvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/* 
** This funtion will read a line and saving accordingly to the Buffer 
** size given and it will store in the saving static variable.
** If saving is NULL, we copy the buffer to it. 
** If it is not, we join what was already on saving with buf.
** We stop whenever saving has a line break.
*/

static int	read_line_store_in_saving(int fd, char *buf, char **saving)
{
	int		rd;
	char	*temp;

	while (1)
	{
		rd = read(fd, buf, BUFFER_SIZE);
		buf[rd] = '\0';
		if (!saving[fd])
			saving[fd] = ft_strdup(buf);
		else
		{
			temp = ft_strjoin(saving[fd], buf);
			free(saving[fd]);
			saving[fd] = temp;
		}
		if (ft_strchr(saving[fd], '\n'))
			break ;
		if (rd <= 0)
			break ;
	}
	free(buf);
	return (rd);
}

/*
** This funtion will store everything that is stored in saving in line
** until the line break. First, we will check if there is a line break
** or not in saving, if there is no line break, *line will be equal to the result
** of the reading stored in saving. Else, we see in saving its lenght
** before reaches the newline and the end of the string. Then, we will copy
** saving until this lenght. We will store the rest after the line break
** on a temporary variable, we will free the space in saving and store there 
** what was on the temp var, in order to have it safe on the next function call.
** We will free saving if it is null or  a line and saving accordingly
** to the Buffer size given and it will store in the saving static variable.
** If saving is NULL, we copy the  buffer to it.
** If it is not, we join what was already on saving with buf.
** We stop whenever saving has a line break.
*/

static int	store_in_line(char **saving, char **line)
{
	char	*temp;
	int		len;

	if (!ft_strchr(*saving, '\n'))
	{
		*line = ft_strdup(*saving);
		free(*saving);
		*saving = NULL;
		return (0);
	}
	else
	{
		len = 0;
		while ((*saving)[len] != 0 && (*saving)[len] != '\n')
			len++;
		if (ft_strchr(*saving, '\n'))
		{
			*line = ft_substr(*saving, 0, len);
			temp = ft_strdup(ft_strchr(*saving, '\n') + 1);
			free(*saving);
			*saving = temp;
		}
		return (1);
	}
}

/* Get_next_line will read a file line by line whenever it is called. 
** A line is defined untill it reaches a '\n'. Since the read depends
** on the Buffer Size given (allocate mem with malloc for buf), 
** there will be times the buffer of the reading will have a line break between. 
** To store it in the *line in the right way, we will have to store the rest
**  of the buffer into the static variable.
** The output will depend on the result of the reading function.
** If there is nothing to save from the reading, it will add an empty 
** string to the line.
*/

int	get_next_line(int fd, char **line)
{
	static char		*saving[4096];
	int				ret;
	char			*buf;

	if (fd < 0 || !line || (read(fd, 0, 0) == -1) || BUFFER_SIZE < 1)
		return (-1);
	buf = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (-1);
	ret = read_line_store_in_saving(fd, buf, saving);
	if (ret < 0)
		return (-1);
	else if (ret == 0 && saving[fd] == NULL)
	{	
		*line = ft_strdup("");
		return (0);
	}
	else
		return (store_in_line(&saving[fd], line));
}
