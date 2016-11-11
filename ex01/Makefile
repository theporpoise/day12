# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgould <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/10 14:05:57 by mgould            #+#    #+#              #
#    Updated: 2016/11/10 18:37:01 by mgould           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADER = ft_list.h
FLAG = -Wall -Wextra -Werror
OPTION = -I $(HEADER)
O = srcs/
SRC = ft_cat.c $(O)ft_putchar.c $(O)ft_putstr.c $(O)ft_putnbr.c \
	$(O)ft_strlen.c $(O)fte_putchar.c $(O)fte_putstr.c
DEST = -o ft_cat;

all:
	gcc $(FLAG) $(OPTION) $(SRC) $(DEST)

clean:
	rm -f ft_cat

fclean: clean
	rm -fr ft_cat

re: fclean all
