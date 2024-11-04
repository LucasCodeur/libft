# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lud-adam <lud-adam <marvin@42.fr> >        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/29 19:07:32 by lud-adam          #+#    #+#              #
#    Updated: 2024/11/04 18:53:05 by lud-adam         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME := libft

CC := cc

CFLAGS := -Wall -Werror -Wextra -g

INC := includes

SRC := ft_isalpha.c \
	   ft_isdigit.c \
	   ft_isalnum.c \
	   ft_isascii.c \
	   ft_isprint.c \
	   test/test.c \
	   main.c \

OBJ := $(SRC:.c=.o)

all : $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -I $(INC) -c $< -o $@

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) -I $(INC) $(OBJ) -o $(NAME)

clean : 
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
