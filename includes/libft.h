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

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(char c);
int ft_space(int c);
int ft_isponctuation(int c);
int ft_isprint(int c);

#endif