# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llaakson <llaakson@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/31 21:10:17 by llaakson          #+#    #+#              #
#    Updated: 2024/06/03 15:24:38 by llaakson         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SOURCES =	ft_printf.c ft_printf_helper.c ft_print_address.c \
		  
HEADF	=	ft_printf.h

OBJECTS = $(SOURCES:%.c=%.o)

CC	=	cc
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

%.o:	%.c	$(HEADF)
	$(CC)	$(CFLAGS)	-c	$<	-o	$@

$(NAME): $(OBJECTS)
	ar	-rcs	$(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
