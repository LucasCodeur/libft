/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_itoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:47:22 by lud-adam          #+#    #+#             */
/*   Updated: 2024/11/20 15:22:09 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions_test.h"

void	test_1_convert_int_to_ascii(void)
{
	int		test;
	char	*dest;

	test = 123456789;
	dest = ft_itoa(test);
	printf(BLUE"------------------- itoa -------------------\n\n"RESET);
	printf("TEST 1 : Int to ascii \n\n");
	printf(CYAN"INT : %d\n\n"RESET, test);
	printf("String : %s", dest);
	printf("\n");
	free(dest);
	printf(BLUE"\n--------------------- end ----------------------\n\n"RESET);
}

void	test_2_convert_1_int_to_ascii(void)
{
	int		test;
	char	*dest;

	test = 0;
	dest = ft_itoa(test);
	printf(BLUE"------------------- itoa -------------------\n\n"RESET);
	printf("TEST 2 : 1 Int to ascii \n\n");
	printf(CYAN"INT : %d\n\n"RESET, test);
	printf("String : %s", dest);
	printf("\n");
	free(dest);
	printf(BLUE"\n--------------------- end ----------------------\n\n"RESET);
}

void	test_3_convert_negative_int(void)
{
	int		test;
	char	*dest;

	test = -123;
	dest = ft_itoa(test);
	printf(BLUE"------------------- itoa -------------------\n\n"RESET);
	printf("TEST 3 : negative int \n\n");
	printf(CYAN"INT : %d\n\n"RESET, test);
	printf("String : %s", dest);
	printf("\n");
	free(dest);
	printf(BLUE"\n--------------------- end ----------------------\n\n"RESET);
}

void	test_4_convert_overflow(void)
{
	int		test;
	char	*dest;

	test = -2147483648;
	dest = ft_itoa(test);
	printf(BLUE"------------------- itoa -------------------\n\n"RESET);
	printf("TEST 4 : overflow \n\n");
	printf(CYAN"INT : %d\n\n"RESET, test);
	printf("String : %s", dest);
	printf("\n");
	free(dest);
	printf(BLUE"\n--------------------- end ----------------------\n\n"RESET);
}

void	test_ft_itoa(void)
{
		// test_1_convert_int_to_ascii();
		// test_2_convert_1_int_to_ascii();
		// test_3_convert_negative_int();
		test_4_convert_overflow();
		
}
