# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eveil <eveil@student.42lyon.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/29 19:07:32 by lud-adam          #+#    #+#              #
#    Updated: 2024/11/22 16:39:27 by lud-adam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a
CC := cc
CFLAGS := -Wall -Werror -Wextra -g -O0 
# DEBUG := -g
INC := -I.

# Directories for object and dependency files
OBJ_DIR := .
DEP_DIR := dep

# Create directories if they don't exist
$(shell mkdir -p $(OBJ_DIR) $(DEP_DIR))

# Source files
SRC = \
	ft_atoi.c     ft_isascii.c  ft_memcmp.c      ft_putendl.c    ft_strdup.c    ft_strlen.c   ft_strtrim.c	\
	ft_bzero.c    ft_isdigit.c  ft_memcpy.c      ft_putnbr_fd.c  ft_striteri.c  ft_strmapi.c  ft_substr.c	\
	ft_calloc.c   ft_isprint.c  ft_memmove.c     ft_putstr_fd.c  ft_strjoin.c   ft_strncmp.c  ft_tolower.c \
	ft_isalnum.c  ft_itoa.c     ft_memset.c      ft_split.c      ft_strlcat.c   ft_strnstr.c  ft_toupper.c \
	ft_isalpha.c  ft_memchr.c   ft_putchar_fd.c  ft_strchr.c     ft_strlcpy.c   ft_strrchr.c

SRC_BONUS := \
	ft_lstnew_bonus.c	ft_lstadd_front_bonus.c	ft_lstsize_bonus.c ft_lstlast_bonus.c	ft_lstadd_back_bonus.c \
	ft_lstdelone_bonus.c ft_lstclear_bonus.c	ft_lstiter_bonus.c	ft_lstmap_bonus.c

TEST_SRC := $(shell ls test/*.c)

# Object and dependency files
OBJ := $(addprefix $(OBJ_DIR)/, $(SRC:.c=.o))
OBJ_BONUS := $(addprefix $(OBJ_DIR)/, $(SRC_BONUS:.c=.o))
DEP := $(addprefix $(DEP_DIR)/, $(SRC:.c=.d) $(SRC_BONUS:.c=.d))
TEST_OBJ := $(addprefix $(OBJ_DIR)/, $(TEST_SRC:.c=.o))
TEST_DEP := $(addprefix $(DEP_DIR)/, $(TEST_SRC:.c=.d))

all: $(NAME)

# Include dependency files if they exist
-include $(DEP)
-include $(TEST_DEP)

# $@ = the full target name
# $(@D) = just the directory part of the target
# $(@F) = just the file part of the target
# the -p = create parent directories if they don't exist / Doesn't error if directory exist
# @mkdir = allow to avoid to display in the output a message in the creation of the directory
# -MF =  Allow to stock in a accurate location all .d
# -MP allow to make to continue the building without a throwing an error
$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(@D)
	@mkdir -p $(DEP_DIR)/$(*D)
	$(CC) $(CFLAGS) $(DEBUG) $(INC) -g -MMD -MP -MF $(DEP_DIR)/$*.d -c $< -o $@

$(OBJ_DIR)/test_ft_strlcpy.o: test_ft_strlcpy.c
	@mkdir -p $(@D)
	@mkdir -p $(DEP_DIR)/$(*D)
	$(CC) -lbsd $(CFLAGS) $(INC) -MMD -MP -MF  $(DEP_DIR)/test_ft_strlcpy.d -c test_ft_strlcpy.c -o $@

$(OBJ_DIR)/test_ft_strlcat.o: test_ft_strlcat.c
	@mkdir -p $(@D)
	@mkdir -p $(DEP_DIR)/$(*D)
	$(CC) -lbsd $(CFLAGS) $(INC) -MMD -MP -MF  $(DEP_DIR)/test_ft_strlcat.d -c test_ft_strlcat.c -o $@

$(OBJ_DIR)/test_ft_strnstr.o: test_ft_strnstr.c
	@mkdir -p $(@D)
	@mkdir -p $(DEP_DIR)/$(*D)
	$(CC) -lbsd $(CFLAGS) $(INC) -MMD -MP -MF  $(DEP_DIR)/test_ft_strnstr.d -c test_ft_strnstr.c -o $@
	
$(NAME): $(OBJ) 
	ar -rcs $(NAME) $^

bonus: $(OBJ) $(OBJ_BONUS) 
	ar -rcs $(NAME) $^

test_exec: $(NAME) $(TEST_OBJ)
	$(CC) $(CFLAGS) $(DEBUG) $(INC) $(TEST_OBJ) -o test_exec $(NAME) -lbsd 

clean:
	rm -rf $(OBJ_DIR)/*.o $(DEP_DIR)/*.d

fclean: clean
	rm -f $(NAME) test_exec

re: fclean all

.PHONY: all clean fclean re test_exec bonus
