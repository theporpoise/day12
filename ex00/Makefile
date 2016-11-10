# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgould <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/10 14:05:57 by mgould            #+#    #+#              #
#    Updated: 2016/11/10 14:05:59 by mgould           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADER = ft_list.h
FLAG = -Wall -Wextra -Werror
OPTION = -I $(HEADER)
SRC = main.c

all:
	gcc $(FLAG) $(OPTION) $(SRC)

clean:
	rm -f ./a.out

fclean: clean
	rm -fr ./a.out

re: fclean all
