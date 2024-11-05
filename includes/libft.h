/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam <marvin@42.fr> >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:36:13 b lud-adam          #+#    #+#             */
/*   Updated: 2024/10/31 11:45:35 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H

# include "functions_test.h"
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <ctype.h>
# include <stdlib.h>
# include <string.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_space(int c);
int ft_isponctuation(int c);
int ft_isprint(int c);
size_t ft_strlen(char *str);
void    *ft_memset(void *pointer, int value, size_t count);

#endif