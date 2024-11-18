/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_substr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 16:25:23 by lud-adam          #+#    #+#             */
/*   Updated: 2024/11/18 13:51:46 by lud-adam         ###   ########.fr       */
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
  free(dest);
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
	printf(GREEN"FIND : %s\n"RESET, dest);
  free(dest);
	printf(BLUE"\n--------------------- end ---------------------\n"RESET);
}

void	test_3_ft_substr_with_src_is_empty_start_and_len_equal_to_0(void)
{
	const char	src[] = "";
  char  *dest;
  unsigned int  start;
  size_t  len;

  start = 0;
  len = 0;
  dest = ft_substr(src, start, len);
	printf(BLUE"------------------- ft_substr -------------------\n\n"RESET);
	printf(YELLOW"TEST 3 : Start and len equal to 0 and src is empty : \n\n"RESET);
	printf(CYAN"SRC : %s\n\n"RESET, src);
	printf(GREEN"FIND : %s\n"RESET, dest);
  free(dest);
	printf(BLUE"\n--------------------- end ---------------------\n"RESET);
}

void	test_4_ft_substr_with_start_exceed_src_and_len_equal_0(void)
{
	const char	src[] = "hola";
  char  *dest;
  unsigned int  start;
  size_t  len;

  start = 4748846;
  len = 0;
  dest = ft_substr(src, start, len);
	printf(BLUE"------------------- ft_substr -------------------\n\n"RESET);
	printf(YELLOW"TEST 4 : Start exceed src and len is equal to 0 \n\n"RESET);
	printf(CYAN"SRC : %s\n\n"RESET, src);
	printf(GREEN"FIND : %s\n"RESET, dest);
  free(dest);
	printf(BLUE"\n--------------------- end ---------------------\n"RESET);
}

void	test_5_ft_substr_with_src_empty_start_and_len_0(void)
{
	const char	src[] = "";
  char  *dest;
  unsigned int  start;
  size_t  len;

  start = 0;
  len = 0;
  dest = ft_substr(src, start, len);
	printf(BLUE"------------------- ft_substr -------------------\n\n"RESET);
	printf(YELLOW"TEST 5 : Start and len equal to 0 and src empty \n\n"RESET);
	printf(CYAN"SRC : %s\n\n"RESET, src);
	printf(GREEN"FIND : %s\n"RESET, dest);
  free(dest);
	printf(BLUE"\n--------------------- end ---------------------\n"RESET);
}
void  test_ft_substr(void)
{
  // test_1_ft_substr_find_a_string();
  // test_2_ft_substr_with_start_and_len_equal_to_0();
  // test_3_ft_substr_with_src_is_empty_start_and_len_equal_to_0();
     test_4_ft_substr_with_start_exceed_src_and_len_equal_0();
  // test_5_ft_substr_with_src_empty_start_and_len_0();
}
