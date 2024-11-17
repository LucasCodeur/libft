/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_substr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 16:25:23 by lud-adam          #+#    #+#             */
/*   Updated: 2024/11/17 16:52:08 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions_test.h"

void	test_1_ft_substr_find_a_string(void)
{
	const char	src[] = "One piece est le meilleur manga au monde";
  char  *dest;
  unsigned int  start;
  size_t  len;

  start = 14;
  len = 17;
  dest = ft_substr(src, start, len);
	printf(BLUE"------------------- ft_substr -------------------\n\n"RESET);
	printf(YELLOW"TEST 1 : Find a string :  \n\n"RESET);
	printf(CYAN"SRC : %s\n\n"RESET, src);
	printf(GREEN"FIND : %s\n\n"RESET, dest);
	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
}

void	test_2_ft_substr_with_start_and_len_equal_to_0(void)
{
	const char	src[] = "One piece est le meilleur manga au monde";
  char  *dest;
  unsigned int  start;
  size_t  len;

  start = 0;
  len = 0;
  dest = ft_substr(src, start, len);
	printf(BLUE"------------------- ft_substr -------------------\n\n"RESET);
	printf(YELLOW"TEST 2 : Start and len equal to 0 : \n\n"RESET);
	printf(CYAN"SRC : %s\n\n"RESET, src);
	printf(GREEN"FIND : %s\n\n"RESET, dest);
	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
}

void  test_ft_substr(void)
{
  // test_1_ft_substr_find_a_string();
  test_2_ft_substr_with_start_and_len_equal_to_0();
}
