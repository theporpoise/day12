/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 08:55:48 by mgould            #+#    #+#             */
/*   Updated: 2016/11/10 16:21:41 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_list.h"

void	ft_putnbr(int nb)
{
	long	nb_long;

	nb_long = nb;
	if (nb_long < 0)
	{
		ft_putchar('-');
		nb_long *= -1;
	}
	if (nb_long > 9)
	{
		ft_putnbr((nb_long / 10));
	}
	ft_putchar((nb_long % 10) + '0');
}
