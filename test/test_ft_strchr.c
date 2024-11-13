/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam <marvin@42.fr> >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 19:27:07 by lud-adam          #+#    #+#             */
/*   Updated: 2024/11/13 13:38:12 by lud-adam         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "functions_test.h"

void	test_1_strchr_one_letter(void)
{
	const char	src[] = "teste";
	int		c;

	c = 357;
	printf(BLUE"------------------- strchr -------------------\n\n"RESET);
	printf(YELLOW"TEST 1 : FIND LETTER :  \n\n"RESET);
	printf(MAGENTA"LETTER : %c\n\n"RESET, c);
	printf(GREEN"FIND : %c"RESET, *strchr(src, c));
	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
}

void	test_1_ft_strchr_one_letter(void)
{
	const char	src[] = "teste";
	int		c;

	c = 357;
	printf(BLUE"------------------- ft_strchr -------------------\n\n"RESET);
	printf(YELLOW"TEST 1 : FIND LETTER :  \n\n"RESET);
	printf(MAGENTA"LETTER : %c\n\n"RESET, c);
	printf(GREEN"FIND : %c"RESET, *ft_strchr(src, c));
	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
}

void	test_1_one_letter(void)
{
	test_1_strchr_one_letter();
	test_1_ft_strchr_one_letter();
}

void	test_2_strchr_not_letter(void)
{
	const char	src[] = "karot";
	int		c;

	c = 'd';
	printf(BLUE"------------------- strchr -------------------\n\n"RESET);
	printf(YELLOW"TEST 2 : NOT LETTER :  \n\n"RESET);
	printf(MAGENTA"LETTER : %c\n\n"RESET, c);
	printf(GREEN"RESULT : %s"RESET, strchr(src, c));
	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
}

void	test_2_ft_strchr_not_letter(void)
{
	const char	src[] = "karot";
	int		c;

	c = 'd';
	printf(BLUE"------------------- ft_strchr -------------------\n\n"RESET);
	printf(YELLOW"TEST 2 : NOT LETTER :  \n\n"RESET);
	printf(MAGENTA"LETTER : %c\n\n"RESET, c);
	printf(GREEN"RESULT : %s"RESET, ft_strchr(src, c));
	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
}

void	test_2_not_letter(void)
{
	test_2_strchr_not_letter();
	test_2_ft_strchr_not_letter();
}

void	test_3_strchr_src_is_empty(void)
{
	const char	src[] = "";
	int		c;

	c = 'd';
	printf(BLUE"------------------- strchr -------------------\n\n"RESET);
	printf(YELLOW"TEST 3 : SRC IS EMPTY :  \n\n"RESET);
	printf(MAGENTA"LETTER : %c\n\n"RESET, c);
	printf(GREEN"RESULT : %s"RESET, strchr(src, c));
	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
}

void	test_3_ft_strchr_src_is_empty(void)
{
	const char	src[] = "";
	int		c;

	c = 'd';
	printf(BLUE"------------------- ft_strchr -------------------\n\n"RESET);
	printf(YELLOW"TEST 3 : SRC IS EMPTY :  \n\n"RESET);
	printf(MAGENTA"LETTER : %c\n\n"RESET, c);
	printf(GREEN"RESULT : %s"RESET, ft_strchr(src, c));
	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
}

void	test_3_src_is_empty(void)
{
	test_3_strchr_src_is_empty();
	test_3_ft_strchr_src_is_empty();
}

void	test_4_strchr_c_is_null(void)
{
	const char	src[] = "";
	int		c;

	c = '\0';
	printf(BLUE"------------------- strchr --------------------\n\n"RESET);
	printf(YELLOW"TEST 4 : C IS NULL :  \n\n"RESET);
	printf(MAGENTA"LETTER : %c\n\n"RESET, c);
	printf(GREEN"RESULT : %s"RESET, strchr(src, c));
	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
}

void	test_4_ft_strchr_c_is_null(void)
{
	const char	src[] = "";
	int		c;

	c = '\0';
	printf(BLUE"------------------ ft_strchr ------------------\n\n"RESET);
	printf(YELLOW"TEST 4 : C IS NULL:  \n\n"RESET);
	printf(MAGENTA"LETTER : %c\n\n"RESET, c);
	printf(GREEN"RESULT : %s"RESET, ft_strchr(src, c));
	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
}

void	test_4_c_is_null(void)
{
	test_4_strchr_c_is_null();
	test_4_ft_strchr_c_is_null();
}

void	test_5_strchr_with_value_too_large_for_a_char(void)
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

void	test_5_ft_strchr_with_value_too_large_for_a_char(void)
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

void	test_5_with_value_too_large_for_a_char(void)
{
	test_5_strchr_with_value_too_large_for_a_char();
	test_5_ft_strchr_with_value_too_large_for_a_char();
}

void	test_ft_strchr()
{
	// test_1_one_letter();
	// test_2_not_letter();
	// test_3_src_is_empty();
	// test_4_c_is_null();
	// test_5_with_value_too_large_for_a_char();
}

// Test 2 : You can´t deference a pointer null without segfault
// Test 3 : if src is empty it return null
// Test 4 : if c is equal to null, it will return null
// Test 5 : when you put a value too much in the int and then you cast this value in a char
			// the compilator will do a modulo 256 (the size of a char) on the value in order to ajust in the
			// correspondance value, so if the value is 357, 357 % 256 = 'e';