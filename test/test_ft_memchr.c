/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eveil <eveil@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:32:25 by lud-adam          #+#    #+#             */
/*   Updated: 2024/11/14 14:39:17 by eveil            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "functions_test.h"

void	test_1_memchr_found_data(void)
{
	char data[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	void	*found;
	size_t	size;
	
	size = 10;
	found = memchr(data, 50, size);
	printf(BLUE"------------------- memchr -------------------\n\n"RESET);
	printf("TEST 1 : FOUND DATA \n\n");
	for (size_t i = 0; i < size; i++)
		display_binary(data[i]);
	printf("\n");
	printf(GREEN" : %p"RESET, (char *)found);
	printf("\n\n");
	display_binary(*(unsigned char *)found);
	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
}

void	test_1_ft_memchr_found_data(void)
{
	char data[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	void	*found;
	size_t	size;

	size = 10;
	found = memchr(data, 50, size);
	printf(BLUE"------------------- ft_memchr -------------------\n\n"RESET);
	printf("TEST 1 : FOUND DATA \n\n");
	for (size_t i = 0; i < size; i++)
		display_binary(data[i]);
	printf("\n");
	printf(GREEN" : %p"RESET, (char *)found);
	printf("\n\n");
	display_binary(*(unsigned char *)found);
	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
}

void	test_1_found_data(void)
{
	test_1_memchr_found_data();
	test_1_ft_memchr_found_data();
}

void	test_2_memchr_with_a_string_and_a_size_smaller(void)
{
	const char	data[] = "bonjourno";
	void	*found;
	size_t	size;

	size = ft_strlen(data);
	found = memchr(data, 'n', 2);
	printf(BLUE"------------------- memchr -------------------\n\n"RESET);
	printf("TEST 2 : WITH A STRING AND A SIZE SMALLER \n\n");
	printf("STRING : %s\n\n", data);
	for (size_t i = 0; i < size; i++)
		display_binary(data[i]);
	printf("\n");
	printf(GREEN" : %p"RESET, (char *)found);
	printf("\n");
	// display_binary(*(unsigned char *)found);
	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
}

void	test_2_ft_memchr_with_a_string_and_a_size_smaller(void)
{
	const char	data[] = "bonjourno";
	void	*found;
	size_t	size;

	size = ft_strlen(data);
	found = ft_memchr(data, 'n', 2);
	printf(BLUE"------------------- ft_memchr -------------------\n\n"RESET);
	printf("TEST 2 : WITH A STRING AND A SIZE SMALLER \n\n");
	printf("STRING : %s\n\n", data);
	for (size_t i = 0; i < size; i++)
		display_binary(data[i]);
	printf("\n");
	printf(GREEN" : %p"RESET, (char *)found);
	printf("\n");
	// display_binary(*(unsigned char *)found);
	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
}

void	test_2_with_a_string_and_a_size_smaller(void)
{
	test_2_memchr_with_a_string_and_a_size_smaller();
	test_2_ft_memchr_with_a_string_and_a_size_smaller();
}

void	test_ft_memchr(void)
{
	// test_1_found_data();
	test_2_with_a_string_and_a_size_smaller();
}