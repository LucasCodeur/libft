# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lud-adam <lud-adam <marvin@42.fr> >        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/29 19:07:32 by lud-adam          #+#    #+#              #
#    Updated: 2024/11/13 20:49:42 by lud-adam         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME := libft.a
CC := cc
CFLAGS := -Wall -Werror -Wextra
DEBUG := -g
INC := -I.

# Directories for object and dependency files
OBJ_DIR := obj
DEP_DIR := dep

# Create directories if they don't exist
$(shell mkdir -p $(OBJ_DIR) $(DEP_DIR))

# Source files
SRC := $(shell ls *.c)
TEST_SRC := $(shell ls test/*.c)

# Files requiring -lbsd flag
BSD_FILES := test_ft_strlcpy.o test_ft_strlcat.o test_ft_strnstr.o

# Object and dependency files
OBJ := $(addprefix $(OBJ_DIR)/, $(SRC:.c=.o))
DEP := $(addprefix $(DEP_DIR)/, $(SRC:.c=.d))
TEST_OBJ := $(addprefix $(OBJ_DIR)/, $(TEST_SRC:.c=.o))
TEST_DEP := $(addprefix $(DEP_DIR)/, $(TEST_SRC:.c=.d))

all: $(NAME)

# Include dependency files if they exist
-include $(DEP)
-include $(TEST_DEP)

$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(@D)
	@mkdir -p $(DEP_DIR)/$(*D)
	$(CC) $(CFLAGS) $(INC) -MMD -MP -MF $(DEP_DIR)/$*.d -c $< -o $@

# Specific rules for files requiring -lbsd
$(OBJ_DIR)/test_ft_strlcpy.o: test/test_ft_strlcpy.c
	@mkdir -p $(@D)
	@mkdir -p $(DEP_DIR)/$(*D)
	$(CC) $(CFLAGS) $(INC) -MMD -MP -MF $(DEP_DIR)/test_ft_strlcpy.d -lbsd -c $< -o $@

$(OBJ_DIR)/test_ft_strlcat.o: test/test_ft_strlcat.c
	@mkdir -p $(@D)
	@mkdir -p $(DEP_DIR)/$(*D)
	$(CC) $(CFLAGS) $(INC) -MMD -MP -MF $(DEP_DIR)/test_ft_strlcat.d -lbsd -c $< -o $@

$(OBJ_DIR)/test_ft_strnstr.o: test/test_ft_strnstr.c
	@mkdir -p $(@D)
	@mkdir -p $(DEP_DIR)/$(*D)
	$(CC) $(CFLAGS) $(INC) -MMD -MP -MF $(DEP_DIR)/test_ft_strnstr.d -lbsd -c $< -o $@

$(NAME): $(OBJ)
	ar -rcs $(NAME) $?

test_exec: $(NAME) $(TEST_OBJ)
	$(CC) $(CFLAGS) $(DEBUG) $(INC) $(TEST_OBJ) -o test_exec $(NAME) -lbsd

clean:
	rm -rf $(OBJ_DIR) $(DEP_DIR)

fclean: clean
	rm -f $(NAME) test_exec

re: fclean all

.PHONY: all clean fclean re test_exec
