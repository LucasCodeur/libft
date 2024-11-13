/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam <marvin@42.fr> >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:12:30 by lud-adam          #+#    #+#             */
/*   Updated: 2024/11/13 18:54:35 by lud-adam         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "functions_test.h"

void	test_1_memcmp_same_character(void)
{
	char	src[] = "Luffy";
	char	dest[] = "Lufry";

	printf(BLUE"------------------- memcmp -------------------\n\n"RESET);
	printf("TEST 1 : Same character \n\n");
	printf(CYAN"Src : %s\n\n"RESET, src);
	printf("RETURN : %d\n\n", memcmp(src, dest, 5));
	printf(GREEN"Dest : %s"RESET, dest);
	printf("\n");
	printf(BLUE"\n--------------------- end ----------------------\n\n"RESET);
}

void	test_1_ft_memcmp_same_character(void)
{
	char	src[] = "Luffy";
	char	dest[] = "Lufry";

	printf(BLUE"------------------- ft_memcmp -------------------\n\n"RESET);
	printf("TEST 1 : Same character \n\n");
	printf(CYAN"Src : %s\n\n"RESET, src);
	printf("RETURN : %d\n\n", ft_memcmp(src, dest, 5));
	printf(GREEN"Dest : %s"RESET, dest);
	printf("\n");
	printf(BLUE"\n--------------------- end ----------------------\n\n"RESET);
}

void	test_1_1_same_character(void)
{
	test_1_memcmp_same_character();
	test_1_ft_memcmp_same_character();
}

void	test_2_memcmp_size_is_0(void)
{
	char	src[] = "Luffy";
	char	dest[] = "Lufry";

	printf(BLUE"------------------- memcmp -------------------\n\n"RESET);
	printf("TEST 1 : size is 0 \n\n");
	printf(CYAN"Src : %s\n\n"RESET, src);
	printf("RETURN : %d\n\n", memcmp(src, dest, 0));
	printf(GREEN"Dest : %s"RESET, dest);
	printf("\n");
	printf(BLUE"\n--------------------- end ----------------------\n\n"RESET);
}

void	test_2_ft_memcmp_size_is_0(void)
{
	char	src[] = "Luffy";
	char	dest[] = "Lufry";

	printf(BLUE"------------------- ft_memcmp -------------------\n\n"RESET);
	printf("TEST 1 : Size is 0 \n\n");
	printf(CYAN"Src : %s\n\n"RESET, src);
	printf("RETURN : %d\n\n", ft_memcmp(src, dest, 0));
	printf(GREEN"Dest : %s"RESET, dest);
	printf("\n");
	printf(BLUE"\n--------------------- end ----------------------\n\n"RESET);
}

void	test_2_2_size_is_0(void)
{
	test_2_memcmp_size_is_0();
	test_2_ft_memcmp_size_is_0();
}

void	test_3_memcmp_test_19(void)
{
	char	src[] = "sCpy";
	char	dest[] = "abc\375xx";

	printf(BLUE"------------------- memcmp -------------------\n\n"RESET);
	printf("TEST 3 : Test 19 \n\n");
	printf(CYAN"Src : %s\n\n"RESET, src);
	printf("RETURN : %d\n\n", memcmp(src, dest, 5));
	printf(GREEN"Dest : %s"RESET, dest);
	printf("\n");
	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
}

void	test_3_ft_memcmp_test_19(void)
{
	char	src[] = "abcdef";
	char	dest[] = "abc\375xx";

	printf(BLUE"------------------- ft_memcmp -------------------\n\n"RESET);
	printf("TEST 3 : Test 19 \n\n");
	printf(CYAN"Src : %s\n\n"RESET, src);
	printf("RETURN : %d\n\n", ft_memcmp(src, dest, 5));
	printf(GREEN"Dest : %s"RESET, dest);
	printf("\n");
	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
}

void	test_3_3_test_19(void)
{
	test_3_memcmp_test_19();
	test_3_ft_memcmp_test_19();
}

void	test_ft_memcmp(void)
{
	test_1_1_same_character();
	// test_2_2_size_is_0();
	// test_3_3_test_19();
}