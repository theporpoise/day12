/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 14:21:10 by mgould            #+#    #+#             */
/*   Updated: 2016/11/10 16:42:28 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#define SIZE 50

int	main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[SIZE + 1];

	if (argc < 2)
	{
		fte_putstr("File name missing.\n");
		return (0);
	}
	else if (argc > 2)
	{
		fte_putstr("Too many arguments.\n");
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	while ((ret = read(fd, buf, SIZE)) > 0)
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	close(fd);
	return (0);
}
