# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eveil <eveil@student.42lyon.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/29 19:07:32 by lud-adam          #+#    #+#              #
#    Updated: 2024/11/14 15:48:49 by eveil            ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME := libft.a
CC := cc
CFLAGS := -Wall -Werror -Wextra -g -O0
# DEBUG := -g
INC := -I.

# Directories for object and dependency files
OBJ_DIR := obj
DEP_DIR := dep

# Create directories if they don't exist
$(shell mkdir -p $(OBJ_DIR) $(DEP_DIR))

# Source files
SRC := $(shell ls *.c)

TEST_SRC := $(shell ls test/*.c)

# Object and dependency files
OBJ := $(addprefix $(OBJ_DIR)/, $(SRC:.c=.o))
DEP := $(addprefix $(DEP_DIR)/, $(SRC:.c=.d))
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
	$(CC) $(CFLAGS) $(DEBUG) $(INC) -g -MMD -MP -lbsd -MF $(DEP_DIR)/$*.d -c $< -o $@

# $(OBJ_DIR)/test_ft_strlcpy.o: test_ft_strlcpy.c
# 	@mkdir -p $(@D)
# 	@mkdir -p $(DEP_DIR)/$(*D)
# 	$(CC) -lbsd $(CFLAGS) $(INC) -MMD -MP -MF  $(DEP_DIR)/test_ft_strlcpy.d -c test_ft_strlcpy.c -o $@

# $(OBJ_DIR)/test_ft_strlcat.o: test_ft_strlcat.c
# 	@mkdir -p $(@D)
# 	@mkdir -p $(DEP_DIR)/$(*D)
# 	$(CC) -lbsd $(CFLAGS) $(INC) -MMD -MP -MF  $(DEP_DIR)/test_ft_strlcat.d -c test_ft_strlcat.c -o $@

# $(OBJ_DIR)/test_ft_strnstr.o: test_ft_strnstr.c
# 	@mkdir -p $(@D)
# 	@mkdir -p $(DEP_DIR)/$(*D)
# 	$(CC) -lbsd $(CFLAGS) $(INC) -MMD -MP -MF  $(DEP_DIR)/test_ft_strnstr.d -c test_ft_strnstr.c -o $@
	
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
