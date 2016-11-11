/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 17:08:48 by mgould            #+#    #+#             */
/*   Updated: 2016/11/10 18:41:19 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#define SIZE 10

void	ft_oprint(char *file)
{
	int		fd;
	int		ret;
	char	buf[SIZE + 1];

	fd = open(file, O_RDONLY);
	if (fd < 0)
	{
		ft_putstr("cat: ");
		ft_putstr(file);
		ft_putstr(": No such file or directory\n");
	}
	while ((ret = read(fd, buf, SIZE)) > 0)
	{
		buf[ret] = '\0';
		ft_putstr(buf);
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
