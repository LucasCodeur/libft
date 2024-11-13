/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strnstr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam <marvin@42.fr> >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 19:27:07 by lud-adam          #+#    #+#             */
/*   Updated: 2024/11/13 13:00:06 by lud-adam         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "functions_test.h"

void	test_1_strnstr_one_letter(void)
{
	const char	src[] = "karot";
	const char	c[] = "k";
	char	*find;

	find = strnstr(src, c, 10);
	printf(BLUE"------------------- strnstr -------------------\n\n"RESET);
	printf(YELLOW"TEST 1 : FIND LETTER :  \n\n"RESET);
	printf(MAGENTA"LETTER : %s\n\n"RESET, c);
	printf(GREEN"FIND : %s"RESET, find);
	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
}

void	test_1_ft_strnstr_one_letter(void)
{
	const char	src[] = "karot";
	const char	c[] = "k";
	char	*find;

	find = ft_strnstr(src, c, 1);
	printf(BLUE"------------------- strnstr -------------------\n\n"RESET);
	printf(YELLOW"TEST 1 : FIND LETTER :  \n\n"RESET);
	printf(MAGENTA"LETTER : %s\n\n"RESET, c);
	printf(GREEN"FIND : %s"RESET, find);
	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
}

void	test__one_letter(void)
{
	test_1_strnstr_one_letter();
	test_1_ft_strnstr_one_letter();
}

// void	test_2_strnstr_not_letter(void)
// {
// 	const char	src[] = "karot";
// 	int		c;

// 	c = 'd';
// 	printf(BLUE"------------------- strnstr -------------------\n\n"RESET);
// 	printf(YELLOW"TEST 2 : NOT LETTER :  \n\n"RESET);
// 	printf(MAGENTA"LETTER : %c\n\n"RESET, c);
// 	printf(GREEN"RESULT : %s"RESET, strnstr(src, c));
// 	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
// }

// void	test_2_ft_strnstr_not_letter(void)
// {
// 	const char	src[] = "karot";
// 	int		c;

// 	c = 'd';
// 	printf(BLUE"------------------- ft_strnstr -------------------\n\n"RESET);
// 	printf(YELLOW"TEST 2 : NOT LETTER :  \n\n"RESET);
// 	printf(MAGENTA"LETTER : %c\n\n"RESET, c);
// 	printf(GREEN"RESULT : %s"RESET, ft_strnstr(src, c));
// 	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
// }

// void	test_2_2_not_letter(void)
// {
// 	test_2_strnstr_not_letter();
// 	test_2_ft_strnstr_not_letter();
// }

// void	test_3_strnstr_src_is_empty(void)
// {
// 	const char	src[] = "";
// 	int		c;

// 	c = 'd';
// 	printf(BLUE"------------------- strnstr -------------------\n\n"RESET);
// 	printf(YELLOW"TEST 3 : SRC IS EMPTY :  \n\n"RESET);
// 	printf(MAGENTA"LETTER : %c\n\n"RESET, c);
// 	printf(GREEN"RESULT : %s"RESET, strnstr(src, c));
// 	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
// }

// void	test_3_ft_strnstr_src_is_empty(void)
// {
// 	const char	src[] = "";
// 	int		c;

// 	c = 'd';
// 	printf(BLUE"------------------- ft_strnstr -------------------\n\n"RESET);
// 	printf(YELLOW"TEST 3 : SRC IS EMPTY :  \n\n"RESET);
// 	printf(MAGENTA"LETTER : %c\n\n"RESET, c);
// 	printf(GREEN"RESULT : %s"RESET, ft_strnstr(src, c));
// 	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
// }

// void	test_3_3_src_is_empty(void)
// {
// 	test_3_strnstr_src_is_empty();
// 	test_3_ft_strnstr_src_is_empty();
// }

// void	test_4_strnstr_c_is_null(void)
// {
// 	const char	src[] = "";
// 	int		c;

// 	c = '\0';
// 	printf(BLUE"------------------- strnstr --------------------\n\n"RESET);
// 	printf(YELLOW"TEST 4 : C IS NULL :  \n\n"RESET);
// 	printf(MAGENTA"LETTER : %c\n\n"RESET, c);
// 	printf(GREEN"RESULT : %s"RESET, strnstr(src, c));
// 	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
// }

// void	test_4_ft_strnstr_c_is_null(void)
// {
// 	const char	src[] = "";
// 	int		c;

// 	c = '\0';
// 	printf(BLUE"------------------ ft_strnstr ------------------\n\n"RESET);
// 	printf(YELLOW"TEST 4 : C IS NULL:  \n\n"RESET);
// 	printf(MAGENTA"LETTER : %c\n\n"RESET, c);
// 	printf(GREEN"RESULT : %s"RESET, ft_strnstr(src, c));
// 	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
// }

// void	test_4_4_c_is_null(void)
// {
// 	test_4_strnstr_c_is_null();
// 	test_4_ft_strnstr_c_is_null();
// }

// void	test_5_5_strnstr_with_value_too_large_for_a_char(void)
// {
// 	const char	src[] = "teste";
// 	int		c;

// 	c = 357;
// 	printf(BLUE"------------------- strnstr --------------------\n\n"RESET);
// 	printf(YELLOW"TEST 5 : VALUE TOO LARGE FOR A CHAR :  \n\n"RESET);
// 	printf(MAGENTA"LETTER : %c\n\n"RESET, c);
// 	printf(GREEN"RESULT : %c"RESET, *strnstr(src, c));
// 	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
// }

// void	test_5_5_ft_strnstr_with_value_too_large_for_a_char(void)
// {
// 	const char	src[] = "teste";
// 	int		c;

// 	c = 357;
// 	printf(BLUE"------------------ ft_strnstr ------------------\n\n"RESET);
// 	printf(YELLOW" VALUE TOO LARGE FOR A CHAR:  \n\n"RESET);
// 	printf(MAGENTA"LETTER : %c\n\n"RESET, c);
// 	printf(GREEN"RESULT : %c"RESET, *ft_strnstr(src, c));
// 	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
// }

// void	test_5_5_with_value_too_large_for_a_char(void)
// {
// 	test_5_5_strnstr_with_value_too_large_for_a_char();
// 	test_5_5_ft_strnstr_with_value_too_large_for_a_char();
// }

// void	test_6_strnstr_further_in_memory(void)
// {
// 	const char	src[] = "bonjour";
// 	int		c;

// 	c = 'b';
// 	printf(BLUE"------------------ strnstr -------void	test_1_ft_strnstr_one_letter(void)
// {
// 	const char	src[] = "karot";
// 	const char	c[] = "k";

// 	printf(BLUE"------------------- strnstr -------------------\n\n"RESET);
// 	printf(YELLOW"TEST 1 : FIND LETTER :  \n\n"RESET);
// 	printf(MAGENTA"LETTER : %s\n\n"RESET, c);
// 	printf(GREEN"FIND : %s"RESET, ft_strnstr(src, c, 1));
// 	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
// }-----------\n\n"RESET);
// 	printf(YELLOW" FURTHER INTO MEMORY :  \n\n"RESET);
// 	printf(MAGENTA"LETTER : %c\n\n"RESET, c);
// 	printf(GREEN"RESULT : %s"RESET, ft_strnstr(src + 2, c));
// 	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
// }

// void	test_6_ft_strnstr_further_in_memory(void)
// {
// 	const char	src[] = "bonjour";
// 	int		c;

// 	c = 'b';
// 	printf(BLUE"------------------ ft_strnstr ------------------\n\n"RESET);
// 	printf(YELLOW" FURTHER INTO MEMORY :  \n\n"RESET);
// 	printf(MAGENTA"LETTER : %c\n\n"RESET, c);
// 	printf(GREEN"RESULT : %s"RESET, ft_strnstr(src + 2, c));
// 	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
// }o

// void	test_6_further_into_memory(void)
// {
// 	test_6_strnstr_further_in_memory();
// 	test_6_ft_strnstr_further_in_memory();
// }

void	test_ft_strnstr()
{
	test__one_letter();
	// test_2_2_not_letter();
	// test_3_3_src_is_empty();
	// test_4_4_c_is_null();
	// test_5_5_with_value_too_large_for_a_char();
	// test_6_further_into_memory();
}

// Test 2 : You can´t deference a pointer null without segfault
// Test 3 : if src is empty it return null
// Test 4 : if c is equal to null, it will return nullvoid	test_1_ft_strnstr_one_letter(void)
