/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strrchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam <marvin@42.fr> >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 19:27:07 by lud-adam          #+#    #+#             */
/*   Updated: 2024/11/13 13:00:06 by lud-adam         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "functions_test.h"

void	test_1_strrchr_one_letter(void)
{
	const char	src[] = "karot";
	int		c;

	c = 'k';
	printf(BLUE"------------------- strrchr -------------------\n\n"RESET);
	printf(YELLOW"TEST 1 : FIND LETTER :  \n\n"RESET);
	printf(MAGENTA"LETTER : %c\n\n"RESET, c);
	printf(GREEN"FIND : %c"RESET, *strrchr(src, c));
	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
}

void	test_1_ft_strrchr_one_letter(void)
{
	const char	src[] = "karot";
	int		c;

	c = 'k';
	printf(BLUE"------------------- ft_strrchr -------------------\n\n"RESET);
	printf(YELLOW"TEST 1 : FIND LETTER :  \n\n"RESET);
	printf(MAGENTA"LETTER : %c\n\n"RESET, c);
	printf(GREEN"FIND : %c"RESET, *ft_strrchr(src, c));
	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
}

void	test_1_1_one_letter(void)
{
	test_1_strrchr_one_letter();
	test_1_ft_strrchr_one_letter();
}

void	test_2_strrchr_not_letter(void)
{
	const char	src[] = "karot";
	int		c;

	c = 'd';
	printf(BLUE"------------------- strrchr -------------------\n\n"RESET);
	printf(YELLOW"TEST 2 : NOT LETTER :  \n\n"RESET);
	printf(MAGENTA"LETTER : %c\n\n"RESET, c);
	printf(GREEN"RESULT : %s"RESET, strrchr(src, c));
	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
}

void	test_2_ft_strrchr_not_letter(void)
{
	const char	src[] = "karot";
	int		c;

	c = 'd';
	printf(BLUE"------------------- ft_strrchr -------------------\n\n"RESET);
	printf(YELLOW"TEST 2 : NOT LETTER :  \n\n"RESET);
	printf(MAGENTA"LETTER : %c\n\n"RESET, c);
	printf(GREEN"RESULT : %s"RESET, ft_strrchr(src, c));
	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
}

void	test_2_2_not_letter(void)
{
	test_2_strrchr_not_letter();
	test_2_ft_strrchr_not_letter();
}

void	test_3_strrchr_src_is_empty(void)
{
	const char	src[] = "";
	int		c;

	c = 'd';
	printf(BLUE"------------------- strrchr -------------------\n\n"RESET);
	printf(YELLOW"TEST 3 : SRC IS EMPTY :  \n\n"RESET);
	printf(MAGENTA"LETTER : %c\n\n"RESET, c);
	printf(GREEN"RESULT : %s"RESET, strrchr(src, c));
	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
}

void	test_3_ft_strrchr_src_is_empty(void)
{
	const char	src[] = "";
	int		c;

	c = 'd';
	printf(BLUE"------------------- ft_strrchr -------------------\n\n"RESET);
	printf(YELLOW"TEST 3 : SRC IS EMPTY :  \n\n"RESET);
	printf(MAGENTA"LETTER : %c\n\n"RESET, c);
	printf(GREEN"RESULT : %s"RESET, ft_strrchr(src, c));
	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
}

void	test_3_3_src_is_empty(void)
{
	test_3_strrchr_src_is_empty();
	test_3_ft_strrchr_src_is_empty();
}

void	test_4_strrchr_c_is_null(void)
{
	const char	src[] = "";
	int		c;

	c = '\0';
	printf(BLUE"------------------- strrchr --------------------\n\n"RESET);
	printf(YELLOW"TEST 4 : C IS NULL :  \n\n"RESET);
	printf(MAGENTA"LETTER : %c\n\n"RESET, c);
	printf(GREEN"RESULT : %s"RESET, strrchr(src, c));
	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
}

void	test_4_ft_strrchr_c_is_null(void)
{
	const char	src[] = "";
	int		c;

	c = '\0';
	printf(BLUE"------------------ ft_strrchr ------------------\n\n"RESET);
	printf(YELLOW"TEST 4 : C IS NULL:  \n\n"RESET);
	printf(MAGENTA"LETTER : %c\n\n"RESET, c);
	printf(GREEN"RESULT : %s"RESET, ft_strrchr(src, c));
	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
}

void	test_4_4_c_is_null(void)
{
	test_4_strrchr_c_is_null();
	test_4_ft_strrchr_c_is_null();
}

void	test_5_5_strchr_with_value_too_large_for_a_char(void)
{
	const char	src[] = "teste";
	int		c;

	c = 357;
	printf(BLUE"------------------- strchr --------------------\n\n"RESET);
	printf(YELLOW"TEST 5 : VALUE TOO LARGE FOR A CHAR :  \n\n"RESET);
	printf(MAGENTA"LETTER : %c\n\n"RESET, c);
	printf(GREEN"RESULT : %c"RESET, *strchr(src, c));
	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
}

void	test_5_5_ft_strchr_with_value_too_large_for_a_char(void)
{
	const char	src[] = "teste";
	int		c;

	c = 357;
	printf(BLUE"------------------ ft_strchr ------------------\n\n"RESET);
	printf(YELLOW" VALUE TOO LARGE FOR A CHAR:  \n\n"RESET);
	printf(MAGENTA"LETTER : %c\n\n"RESET, c);
	printf(GREEN"RESULT : %c"RESET, *ft_strchr(src, c));
	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
}

void	test_5_5_with_value_too_large_for_a_char(void)
{
	test_5_5_strchr_with_value_too_large_for_a_char();
	test_5_5_ft_strchr_with_value_too_large_for_a_char();
}

void	test_6_strrchr_further_in_memory(void)
{
	const char	src[] = "bonjour";
	int		c;

	c = 'b';
	printf(BLUE"------------------ strchr ------------------\n\n"RESET);
	printf(YELLOW" FURTHER INTO MEMORY :  \n\n"RESET);
	printf(MAGENTA"LETTER : %c\n\n"RESET, c);
	printf(GREEN"RESULT : %s"RESET, ft_strchr(src + 2, c));
	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
}

void	test_6_ft_strrchr_further_in_memory(void)
{
	const char	src[] = "bonjour";
	int		c;

	c = 'b';
	printf(BLUE"------------------ ft_strchr ------------------\n\n"RESET);
	printf(YELLOW" FURTHER INTO MEMORY :  \n\n"RESET);
	printf(MAGENTA"LETTER : %c\n\n"RESET, c);
	printf(GREEN"RESULT : %s"RESET, ft_strchr(src + 2, c));
	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
}

void	test_6_further_into_memory(void)
{
	test_6_strrchr_further_in_memory();
	test_6_ft_strrchr_further_in_memory();
}

void	test_ft_strrchr()
{
	test_1_1_one_letter();
	// test_2_2_not_letter();
	// test_3_3_src_is_empty();
	// test_4_4_c_is_null();
	// test_5_5_with_value_too_large_for_a_char();
	// test_6_further_into_memory();
}

// Test 2 : You can´t deference a pointer null without segfault
// Test 3 : if src is empty it return null
// Test 4 : if c is equal to null, it will return null