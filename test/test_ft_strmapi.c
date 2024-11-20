/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strmapi.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 18:53:37 by lud-adam          #+#    #+#             */
/*   Updated: 2024/11/20 19:17:39 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions_test.h"

int     ft_is_upperrr(int c)
{
    if (c >= 65 && c <= 90)
        return (1);
    return (0);
}

char	     ft_string_tolowerr(unsigned int i, char c)
{
		(void)i;
    if (ft_is_upperrr(c) == 1)
				return (c + 32);
		return (c);
}

void	test_1_ft_strmapi_apply_lowercase_a_string(void)
{
	char	src[] = "ONE PIECE";
	char	*dest;
	// void	(*f)(unsigned int, char *);

	// f = ft_string_tolower;
	printf(BLUE"------------------- ft strmapi -------------------\n\n"RESET);
	printf(YELLOW"TEST 1 : lowercase a string :  \n\n"RESET);
	printf(MAGENTA"SRC : %s\n\n"RESET, src);
	dest = ft_strmapi(src, &ft_string_tolowerr);
	printf(GREEN"AFTER : %s"RESET, dest);
	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
}

void	test_ft_strmapi()
{
	test_1_ft_strmapi_apply_lowercase_a_string();
}
