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
	char		*find;

	find = strnstr(src, c, 1);
	printf(BLUE "------------------- strnstr ------------------\n\n" RESET);
	printf(YELLOW "TEST 1 : FIND LETTER :  \n\n" RESET);
	printf(MAGENTA "LETTER : %s\n\n" RESET, c);
	printf(GREEN "FIND : %s" RESET, find);
	printf(BLUE "\n-------------------- end ---------------------\n\n" RESET);
}

void	test_1_ft_strnstr_one_letter(void)
{
	const char	src[] = "karot";
	const char	c[] = "k";
	char		*find;

	find = ft_strnstr(src, c, 1);
	printf(BLUE "----------------- ft_strnstr -----------------\n\n" RESET);
	printf(YELLOW "TEST 1 : FIND LETTER :  \n\n" RESET);
	printf(MAGENTA "LETTER : %s\n\n" RESET, c);
	printf(GREEN "FIND : %s" RESET, find);
	printf(BLUE "\n--------------------- end --------------------\n\n" RESET);
}

void	test__one_letter(void)
{
	test_1_strnstr_one_letter();
	test_1_ft_strnstr_one_letter();
}

void	test__2_strnstr_src_is_empty(void)
{
	const char	src[] = "";
	const char	c[] = "k";
	char		*find;

	find = strnstr(src, c, 10);
	printf(BLUE "----------------- strnstr -----------------\n\n" RESET);
	printf(YELLOW "TEST 1 : SRC IS EMPTY :  \n\n" RESET);
	printf(MAGENTA "LETTER : %s\n\n" RESET, c);
	printf(GREEN "FIND : %s" RESET, find);
	printf(BLUE "\n--------------------- end --------------------\n\n" RESET);
}

void	test__2_ft_strnstr_src_is_empty(void)
{
	const char	src[] = "";
	const char	c[] = "k";
	char		*find;

	find = ft_strnstr(src, c, 10);
	printf(BLUE "----------------- ft_strnstr -----------------\n\n" RESET);
	printf(YELLOW "TEST 1 : SRC IS EMPTY :  \n\n" RESET);
	printf(MAGENTA "LETTER : %s\n\n" RESET, c);
	printf(GREEN "FIND : %s" RESET, find);
	printf(BLUE "\n--------------------- end --------------------\n\n" RESET);
}

void	test__src_is_empty(void)
{
	test__2_strnstr_src_is_empty();
	test__2_ft_strnstr_src_is_empty();
}

void	test__3_strnstr_find_a_word_with_smaller_length(void)
{
	const char	src[] = "lorem ipsum dolor sit amet";
	const char	c[] = "dolor";
	char		*find;

	find = strnstr(src, c, 15);
	printf(BLUE "----------------- strnstr -----------------\n\n" RESET);
	printf(YELLOW "TEST 1 : FIND A WORD WITH A SMALLER LENGTH THAT SRC :  \n\n" RESET);
	printf(MAGENTA "LETTER : %s\n\n" RESET, c);
	printf(GREEN "FIND : %s" RESET, find);
	printf(BLUE "\n--------------------- end --------------------\n\n" RESET);
}

void	test__3_ft_strnstr_find_a_word_with_smaller_length(void)
{
	const char	src[] = "lorem ipsum dolor sit amet";
	const char	c[] = "dolor";
	char		*find;

	find = ft_strnstr(src, c, 15);
	printf(BLUE "----------------- ft_strnstr -----------------\n\n" RESET);
	printf(YELLOW "TEST 1 : FIND A WORD WITH A SMALLER LENGTH THAT SRC :  \n\n" RESET);
	printf(MAGENTA "LETTER : %s\n\n" RESET, c);
	printf(GREEN "FIND : %s" RESET, find);
	printf(BLUE "\n--------------------- end --------------------\n\n" RESET);
}
void	find_find_a_word_with_smaller_length(void)
{
	test__3_strnstr_find_a_word_with_smaller_length();
	test__3_ft_strnstr_find_a_word_with_smaller_length();
}

void	test_4_strnstr_size_is_equal_to_the_of_src(void)
{
	const char	src[30] = "aaabcabcd";
	const char	c[] = "abcd";
	char		*find;

	find = strnstr(src, c, 9);
	printf(BLUE "----------------- strnstr -----------------\n\n" RESET);
	printf(YELLOW "TEST FRANCINETTE :  \n\n" RESET);
	printf(MAGENTA "LETTER : %s\n\n" RESET, c);
	printf(GREEN "FIND : %s" RESET, find);
	printf(BLUE "\n--------------------- end --------------------\n\n" RESET);
}

void	test_4_ft_strnstr_size_is_equal_to_the_of_src(void)
{
	const char	src[30] = "aaabcabcd";
	const char	c[] = "abcd";
	char		*find;

	find = ft_strnstr(src, c, 9);
	printf(BLUE "----------------- ft_strnstr -----------------\n\n" RESET);
	printf(YELLOW "TEST : FRANCINETTE :  \n\n" RESET);
	printf(MAGENTA "LETTER : %s\n\n" RESET, c);
	printf(GREEN "FIND : %s" RESET, find);
	printf(BLUE "\n--------------------- end --------------------\n\n" RESET);
}

void	test_size_is_equal_to_the_of_src(void)
{
	test_4_strnstr_size_is_equal_to_the_of_src();
	test_4_ft_strnstr_size_is_equal_to_the_of_src();
}

void	test_strnstr_francinette(void)
{
	const char	src[30] = "aaabcabcd";
	const char	c[] = "cd";
	char		*find;

	find = strnstr(src, c, 8);
	printf(BLUE "----------------- strnstr -----------------\n\n" RESET);
	printf(YELLOW "TEST FRANCINETTE :  \n\n" RESET);
	printf(MAGENTA "LETTER : %s\n\n" RESET, c);
	printf(GREEN "FIND : %s" RESET, find);
	printf(BLUE "\n--------------------- end --------------------\n\n" RESET);
}

void	test_ft_strnstr_francinette(void)
{
	const char	c[] = "cd";
	char		*find;

	const char src[30] = "aaabcabcd"; // 9
	find = ft_strnstr(src, c, 8);
	printf(BLUE "----------------- ft_strnstr -----------------\n\n" RESET);
	printf(YELLOW "TEST : FRANCINETTE :  \n\n" RESET);
	printf(MAGENTA "LETTER : %s\n\n" RESET, c);
	printf(GREEN "FIND : %s" RESET, find);
	printf(BLUE "\n--------------------- end --------------------\n\n" RESET);
}

void	test_francinette(void)
{
	test_strnstr_francinette();
	test_ft_strnstr_francinette();
}

void	test_ft_strnstr(void)
{
	// test__one_letter();
	// test__src_is_empty();
	// find_find_a_word_with_smaller_length();
	// test_size_is_equal_to_the_of_src();
	test_francinette();
}
