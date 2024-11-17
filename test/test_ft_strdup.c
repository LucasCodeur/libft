/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 15:46:42 by lud-adam          #+#    #+#             */
/*   Updated: 2024/11/17 16:04:30 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions_test.h"

void	test_1_strdup_copy_a_string(void)
{
  char    *src = "One piece est le meilleur manga au monde";
  char    *dest;

	printf(BLUE"----------------- strdup -----------------\n"RESET);
	printf(YELLOW"TEST 1 : Copy a string\n\n"RESET);
  dest = strdup(src);
  printf(MAGENTA"%s\n"RESET, dest);
  free(dest);
	printf(BLUE"\n----------------- end ----------------\n\n"RESET);
}

void	test_1_ft_strdup_copy_a_string(void)
{
  char    *src = "One piece est le meilleur manga au monde";
  char    *dest;

	printf(BLUE"----------------- strdup -----------------\n"RESET);
	printf(YELLOW"TEST 1 : Copy a string\n\n"RESET);
  dest = ft_strdup(src);
  printf(MAGENTA"%s\n"RESET, dest);
  free(dest);
	printf(BLUE"\n----------------- end ----------------\n\n"RESET);
}

void    test_ft_strdup(void)
{
  test_1_strdup_copy_a_string();
	test_1_ft_strdup_copy_a_string();
}
