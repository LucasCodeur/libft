/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:56:24 by lud-adam          #+#    #+#             */
/*   Updated: 2024/11/20 13:24:54 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions_test.h"

void	test_1_ft_split_split_a_regular_string(void)
{
	char	s[] = "One Piece est le meilleur manga";
	char	c = ' ';
	char	**final_array;
	size_t	i;

  final_array = ft_split(s, c);
	ft_split(s, c);
	i = 0;
	printf(BLUE"------------------- ft_split -------------------\n\n"RESET);
	printf(YELLOW"TEST 1: SPLIT A REGULAR STRING :  \n\n"RESET);
	printf(GREEN"SET : %s\n\n"RESET, s);
	while (final_array[i])
	{
		printf(MAGENTA"%s\n"RESET, final_array[i]);
		i++;
	}
	printf(MAGENTA"%s\n"RESET, final_array[i]);
	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
}

void	test_2_ft_split_split_a_string_with_many_separator_at_the_beginning(void)
{
	char	s[] = "xxxxxxxxxxxxhello!";
	char	c = 'x';
	char	**final_array;
	size_t	i;

  final_array = ft_split(s, c);
	ft_split(s, c);
	i = 0;
	printf(BLUE"------------------- ft_split -------------------\n\n"RESET);
	printf(YELLOW"TEST 2: SPLIT A STRING WITH MANY SEPARATOR AT THE BEGINNING :  \n\n"RESET);
	printf(GREEN"SET : %s\n\n"RESET, s);
	while (final_array[i])
	{
		printf(MAGENTA"%s\n"RESET, final_array[i]);
		i++;
	}
	printf(MAGENTA"%s\n"RESET, final_array[i]);
	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
}

void	test_ft_split(void)
{
	// test_1_ft_split_split_a_regular_string();
	test_2_ft_split_split_a_string_with_many_separator_at_the_beginning();
}
