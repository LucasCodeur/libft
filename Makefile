# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eveil <eveil@student.42lyon.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/29 19:07:32 by lud-adam          #+#    #+#              #
#    Updated: 2024/11/09 21:33:50 by eveil            ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME := libft.a
CC := cc
CFLAGS := -Wall -Werror -Wextra -g
DEBUG := -g
INC := -I.
SRC := ft_isalpha.c \
       ft_isdigit.c \
       ft_isalnum.c \
       ft_isascii.c \
       ft_isprint.c \
       ft_strlen.c \
       ft_memset.c \
	   ft_bzero.c \
	   ft_memcpy.c \
	   ft_memmove.c \

TEST_SRC := test/test_ft_is_alpha.c \
			test/test_ft_is_digit.c \
			test/test_ft_is_alnum.c \
			test/test_ft_is_ascii.c \
			test/test_ft_isprint.c \
			test/test_ft_bzero.c \
			test/test_ft_memcpy.c \
			test/test_ft_memmove.c \
			test/test_ft_memset.c \
			test/test_ft_strlen.c \
			test/functions_utils.c \
			test/main.c \
			
TEST_OBJ := $(TEST_SRC:.c=.o)
OBJ := $(SRC:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

test_exec: $(NAME) $(TEST_OBJ)
	$(CC) $(CFLAGS) $(DEBUG) $(INC) $(TEST_OBJ) -o test_exec $(NAME)

clean:
	rm -f $(OBJ) $(TEST_SRC:.c=.o)

fclean: clean
	rm -f $(NAME) test_exec

re: fclean all

.PHONY: all clean fclean re
