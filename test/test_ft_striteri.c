/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_striteri.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:28:12 by lud-adam          #+#    #+#             */
/*   Updated: 2024/11/20 18:37:07 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions_test.h"

int     ft_is_upperr(int c)
{
    if (c >= 65 && c <= 90)
        return (1);
    return (0);
}

void     ft_string_tolower(unsigned int i, char *s)
{
    if (ft_is_upperr(s[i]) == 1)
					s[i] = s[i] + 32;
}

void	test_1_apply_lowercase_a_string(void)
{
	char	src[] = "ONE PIECE";
	// void	(*f)(unsigned int, char *);

	// f = ft_string_tolower;
	printf(BLUE"------------------- ft striteri -------------------\n\n"RESET);
	printf(YELLOW"TEST 1 : lowercase a string :  \n\n"RESET);
	printf(MAGENTA"SRC : %s\n\n"RESET, src);
	ft_striteri(src, &ft_string_tolower);
	printf(GREEN"AFTER : %s"RESET, src);
	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
}

void	test_ft_striteri()
{
	test_1_apply_lowercase_a_string();
}
