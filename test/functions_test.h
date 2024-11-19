/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_test.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eveil <eveil@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:47:44 by lud-adam          #+#    #+#             */
/*   Updated: 2024/11/19 18:57:38 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_TEST_H
# define FUNCTIONS_TEST_H

# define TEST_ALPHA_MINUS 'i'
# define TEST_ALPHA_CAPITAL 'A'
# define TEST_WRONG_CHARACTER '?'
# define TEST_DIGIT '1'
# define TEST_WHITE_SPACE '\t'
# define TEST_SPECIAL_CHARACTER '!'
# define TEST_END_SPECIAL_CHARACTER '~'
# define TEST_STRING "test"

// ANSI escape codes for colors
# define RESET   "\x1b[0m"
# define RED     "\x1b[31m"
# define GREEN   "\x1b[32m"
# define YELLOW  "\x1b[33m"
# define BLUE    "\x1b[34m"
# define MAGENTA "\x1b[35m"
# define CYAN    "\x1b[36m"
# define WHITE   "\x1b[37m"
# define BLACK   "\x1b[30m"
# define BRIGHT_RED     "\x1b[91m"
# define BRIGHT_GREEN   "\x1b[92m"
# define BRIGHT_YELLOW  "\x1b[93m"
# define BRIGHT_BLUE    "\x1b[94m"
# define BRIGHT_MAGENTA "\x1b[95m"
# define BRIGHT_CYAN    "\x1b[96m"
# define BRIGHT_WHITE   "\x1b[97m"

// Background colors
# define BG_BLACK   "\x1b[40m"
# define BG_RED     "\x1b[41m"
# define BG_GREEN   "\x1b[42m"
# define BG_YELLOW  "\x1b[43m"
# define BG_BLUE    "\x1b[44m"
# define BG_MAGENTA "\x1b[45m"
# define BG_CYAN    "\x1b[46m"
# define BG_WHITE   "\x1b[47m"

# include "../libft.h"
# include <ctype.h>
# include <fcntl.h>
# include <stdio.h>
# include <string.h>
# include <bsd/string.h>
# include <stddef.h>
# include <limits.h>

void	test_ft_isalpha(void);
void	test_ft_isdigit(void);
void  test_ft_isalnum(void);
void  test_ft_isascii(void);
void  test_ft_isprint(void);
void	test_ft_strlen(void);
void  test_ft_memset(void);
void  test_ft_bzero(void);
void  test_ft_memcpy(void);
void  test_ft_memmove(void);
void  test_ft_strlcpy(void);
void  test_ft_strlcat(void);
void  test_ft_toupper(void);
void  test_ft_tolower(void);
void	test_ft_strchr(void);
void	test_ft_strrchr(void);
void	test_ft_strncmp(void);
void	test_ft_memchr(void);
void	test_ft_memcmp(void);
void	test_ft_strnstr(void);
void	test_ft_atoi(void);
void  test_ft_calloc(void);
void  test_ft_strdup(void);
void  test_ft_substr(void);
void	test_ft_strjoin(void);
void	test_ft_putchar_fd(void);
void	test_ft_strtrim(void);
void	test_ft_split(void);
void    display_binary(unsigned char octet);

#endif
