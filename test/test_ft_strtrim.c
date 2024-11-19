/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strtrim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:16:21 by lud-adam          #+#    #+#             */
/*   Updated: 2024/11/19 16:40:46 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions_test.h"

void	test_1_ft_strtrim_trim_a_string(void)
{
	const char	s1[] = "--Kakarot--";
	const char	set[] = "-";
	char	*final_array;

  final_array = ft_strtrim(s1, set);
	printf(BLUE"------------------- ft_strtrim -------------------\n\n"RESET);
	printf(YELLOW"TEST 1 : Trim a string :  \n\n"RESET);
	printf(CYAN"S1 : %s\n\n"RESET, s1);
	printf(GREEN"SET : %s\n\n"RESET, set);
	printf(MAGENTA"FINAL ARRAY : %s\n"RESET, final_array);
  // free(final_array);
	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
}

void	test_2_ft_strtrim_trim_a_string_with_sep_in_the_middle(void)
{
	const char	s1[] = "--Kaka-rot--";
	const char	set[] = "-";
	char	*final_array;

  final_array = ft_strtrim(s1, set);
	printf(BLUE"------------------- ft_strtrim -------------------\n\n"RESET);
	printf(YELLOW"TEST 2: TRIM A STRING WITH SEP IN THE MIDDLE :  \n\n"RESET);
	printf(CYAN"S1 : %s\n\n"RESET, s1);
	printf(GREEN"SET : %s\n\n"RESET, set);
	printf(MAGENTA"FINAL ARRAY : %s\n"RESET, final_array);
  // free(final_array);
	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
}

void	test_3_ft_strtrim_trim_a_string_with_multiple_sep(void)
{
	const char	s1[] = "-,Kaka,-rot-,";
	const char	set[] = "-,";
	char	*final_array;

  final_array = ft_strtrim(s1, set);
	printf(BLUE"------------------- ft_strtrim -------------------\n\n"RESET);
	printf(YELLOW"TEST 3: TRIM A STRING WITH MULTIPLE STRING :  \n\n"RESET);
	printf(CYAN"S1 : %s\n\n"RESET, s1);
	printf(GREEN"SET : %s\n\n"RESET, set);
	printf(MAGENTA"FINAL ARRAY : %s\n"RESET, final_array);
  // free(final_array);
	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
} 

void	test_4_ft_strtrim_empty_string(void)
{
	const char	s1[] = "";
	const char	set[] = "-,";
	char	*final_array;

  final_array = ft_strtrim(s1, set);
	printf(BLUE"------------------- ft_strtrim -------------------\n\n"RESET);
	printf(YELLOW"TEST 4: EMPTY STRING :  \n\n"RESET);
	printf(GREEN"SET : %s\n\n"RESET, set);
	printf(MAGENTA"FINAL ARRAY : %s\n"RESET, final_array);
  // free(final_array);
	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
}

void	test_5_ft_strtrim_same_character_of_sep(void)
{
	const char	s1[] = "   xxx   xxx";
	const char	set[] = " x";
	char	*final_array;

  final_array = ft_strtrim(s1, set);
	printf(BLUE"------------------- ft_strtrim -------------------\n\n"RESET);
	printf(YELLOW"TEST 5: SAME CHARACTER :  \n\n"RESET);
	printf(GREEN"SET : %s\n\n"RESET, set);
	printf(MAGENTA"FINAL ARRAY : %s\n"RESET, final_array);
  // free(final_array);
	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
}

void	test_6_ft_strtrim_empty_sep_string(void)
{
	const char	s1[] = "";
	const char	set[] = "";
	char	*final_array;

  final_array = ft_strtrim(s1, set);
	printf(BLUE"------------------- ft_strtrim -------------------\n\n"RESET);
	printf(YELLOW"TEST 6: EMPTY CHARACTER AND SEP :  \n\n"RESET);
	printf(GREEN"SET : %s\n\n"RESET, set);
	printf(MAGENTA"FINAL ARRAY : %s\n"RESET, final_array);
  // free(final_array);
	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
}

void	test_ft_strtrim(void)
{
	// test_1_ft_strtrim_trim_a_string();
	// test_2_ft_strtrim_trim_a_string_with_sep_in_the_middle();
	// test_3_ft_strtrim_trim_a_string_with_multiple_sep();
	// test_4_ft_strtrim_empty_string();
	// test_5_ft_strtrim_same_character_of_sep();
	test_6_ft_strtrim_empty_sep_string();
}
