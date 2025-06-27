# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/24 16:34:14 by ppassos           #+#    #+#              #
#    Updated: 2024/07/17 15:12:56 by ppassos          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FLAGS = -Wall -Wextra -Werror

CC = cc -g $(FLAGS)

CFILES = ft_printf.c ft_putchar_fd.c ft_ppercentage.c ft_strlen.c ft_putstr_fd.c \
ft_putnbr_base.c 

OBJECTS = $(CFILES:.c=.o)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

clean:
	$(RM) $(OBJECTS)

all : $(NAME)

re: fclean all

exec:
	$(CC) $(FLAGS) $(CFILES) -lbsd