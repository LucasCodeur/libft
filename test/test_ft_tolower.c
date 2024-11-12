/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_tolower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam <marvin@42.fr> >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:45:18 by lud-adam          #+#    #+#             */
/*   Updated: 2024/11/12 19:23:55 by lud-adam         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "functions_test.h"

void    test_ft_lower_is_lower(void)
{
	printf(BLUE"------------------- TEST FT_TOLOWER -------------------\n"RESET);
    char    c;

    c = 'C';
    printf("%c\n\n", c);
    printf("%c", ft_tolower(c));
	printf(BLUE"\n------------------------- END --------------------------\n"RESET);
}

void    test_ft_lower_is_upper(void)
{
	printf(BLUE"------------------- TEST FT_TOLOWER -------------------\n"RESET);
    char    c;

    c = 'C';
    printf("%c\n\n", c);
    printf("%c", ft_tolower(c));
	printf(BLUE"\n------------------------- END --------------------------\n"RESET);
}

void    test_ft_tolower(void)
{
    test_ft_lower_is_lower();
    test_ft_lower_is_upper();
}
