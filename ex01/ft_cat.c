/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 17:08:48 by mgould            #+#    #+#             */
/*   Updated: 2016/11/10 19:27:52 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <errno.h>
#define SIZE 10

void	ft_error(int error, char *file_name)
{
	if (error == 2)
	{
		ft_putstr("cat: " );
		ft_putstr(file_name);
		ft_putstr(": No such file or directory\n");
	}
	if (error == 21)
	{
		ft_putstr("cat: " );
		ft_putstr(file_name);
		ft_putstr(": Is a directory\n");
	}
	if (error == 13)
	{
		ft_putstr("cat: " );
		ft_putstr(file_name);
		ft_putstr(": Permission denied\n");
	}
}

void	ft_oprint(char *file)
{
	int		fd;
	int		ret;
	char	buf[SIZE + 1];

	fd = open(file, O_RDONLY);
	if (fd < 0)
	{
		ft_error(errno, file);
		return ;
	}
	while ((ret = read(fd, buf, SIZE)) > 0)
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	if (ret < 0)
	{
		ft_error(errno, file);
		return ;
	}
	close(fd);
}

void	print_stdin(void)
{
	int		ret;
	char	buf[SIZE + 1];

	while ((ret = read(0, buf, SIZE)) > 0)
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
}

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	if (argc < 2)
	{
		print_stdin();
		return (0);
	}
	while (i < argc)
	{
		if ((argv[i][0] == '-') && !(argv[i][1]))
		{
			print_stdin();
		}
		ft_oprint(argv[i]);
		i++;
	}
	return (0);
}
