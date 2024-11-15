/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eveil <eveil@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 11:36:56 by lud-adam          #+#    #+#             */
/*   Updated: 2024/11/15 18:24:36 by eveil            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "functions_test.h"

void	test_1_atoi_string_to_int(void)
{
	const char nptr[30] = "    -123457";
	int		nb;

	nb = atoi(nptr);
	printf(BLUE"----------------- atoi -----------------\n\n"RESET);
	printf(YELLOW"TEST 1 : string to int  \n\n"RESET);
	printf(MAGENTA"NPTR : %s\n\n"RESET, nptr);
	printf(GREEN"NB : %d\n"RESET, nb);
	printf(BLUE"\n----------------- end ----------------\n\n"RESET);
}

void	test_1_ft_atoi_string_to_int(void)
{
	const char nptr[30] = "    -123457";
	int		nb;

	nb = ft_atoi(nptr);
	printf(BLUE"--------------- ft_atoi ---------------\n\n"RESET);
	printf(YELLOW"TEST 1 : string to int  \n\n"RESET);
	printf(MAGENTA"NPTR : %s\n\n"RESET, nptr);
	printf(GREEN"NB : %d\n"RESET, nb);
	printf(BLUE"\n----------------- end ----------------\n\n"RESET);
}

void	test_1_string_to_int(void)
{
	test_1_atoi_string_to_int();
	test_1_ft_atoi_string_to_int();
}

void	test_2_atoi_with_negative_sign(void)
{
	const char nptr[30] = "    --123457";
	int		nb;

	nb = atoi(nptr);
	printf(BLUE"----------------- atoi -----------------\n\n"RESET);
	printf(YELLOW"TEST 2 : string to int  \n\n"RESET);
	printf(MAGENTA"NPTR : %s\n\n"RESET, nptr);
	printf(GREEN"FIND : %d\n"RESET, nb);
	printf(BLUE"\n----------------- end ----------------\n\n"RESET);
}

void	test_2_ft_atoi_with_negative_sign(void)
{
	const char nptr[30] = "    --123457";
	int		nb;

	nb = ft_atoi(nptr);
	printf(BLUE"--------------- ft_atoi ---------------\n\n"RESET);
	printf(YELLOW"TEST 2 : string to int  \n\n"RESET);
	printf(MAGENTA"NPTR : %s\n\n"RESET, nptr);
	printf(GREEN"FIND : %d\n"RESET, nb);
	printf(BLUE"\n----------------- end ----------------\n\n"RESET);
}

void	test_2_with_negative_sign(void)
{
	test_2_atoi_with_negative_sign();
	test_2_ft_atoi_with_negative_sign();

}

void	test_3_atoi_with_lot_of_0_and_one_plus(void)
{
	const char nptr[50] = "+00000000000000000000000000000000123";
	int		nb;

	nb = atoi(nptr);
	printf(BLUE"----------------- atoi -----------------\n\n"RESET);
	printf(YELLOW"TEST 3 : WITH LOT OF 0 AND ONE PLUS  \n\n"RESET);
	printf(MAGENTA"NPTR : %s\n\n"RESET, nptr);
	printf(GREEN"FIND : %d\n"RESET, nb);
	printf(BLUE"\n----------------- end ----------------\n\n"RESET);
}

void	test_3_ft_atoi_with_lot_of_0_and_one_plus(void)
{
	const char nptr[50] = "+000000000000000000000000000000123";
	int		nb;

	nb = ft_atoi(nptr);
	printf(BLUE"--------------- ft_atoi ---------------\n\n"RESET);
	printf(YELLOW"TEST 3 : WITH LOT OF 0 AND ONE PLUS  \n\n"RESET);
	printf(MAGENTA"NPTR : %s\n\n"RESET, nptr);
	printf(GREEN"FIND : %d\n"RESET, nb);
	printf(BLUE"\n----------------- end ----------------\n\n"RESET);
}

void	test_3_with_lot_of_0_and_one_plus(void)
{
	test_3_atoi_with_lot_of_0_and_one_plus();
	test_3_ft_atoi_with_lot_of_0_and_one_plus();

}

void	test_4_atoi_francinette(void)
{
	const char nptr[50] = "\007 8";
	int		nb;

	nb = atoi(nptr);
	printf(BLUE"----------------- atoi -----------------\n\n"RESET);
	printf(YELLOW"TEST 4 : FRANCINETTE  \n\n"RESET);
	printf(MAGENTA"NPTR : %s\n\n"RESET, nptr);
	printf(GREEN"FIND : %d\n"RESET, nb);
	printf(BLUE"\n----------------- end ----------------\n\n"RESET);
}

void	test_4_ft_atoi_francinette(void)
{
	const char nptr[50] = "\007 8";
	int		nb;

	nb = ft_atoi(nptr);
	printf(BLUE"--------------- ft_atoi ---------------\n\n"RESET);
	printf(YELLOW"TEST 4 : FRANCINETTE  \n\n"RESET);
	printf(MAGENTA"NPTR : %s\n\n"RESET, nptr);
	printf(GREEN"FIND : %d\n"RESET, nb);
	printf(BLUE"\n----------------- end ----------------\n\n"RESET);
}

void	test_4_francinette(void)
{
	test_4_atoi_francinette();
	test_4_ft_atoi_francinette();

}

void	test_5_atoi_isspace(void)
{
	const char nptr[50] = " 	 8";
	int		nb;

	nb = atoi(nptr);
	printf(BLUE"----------------- atoi -----------------\n\n"RESET);
	printf(YELLOW"TEST 5 : ISSPACE  \n\n"RESET);
	printf(MAGENTA"NPTR : %s\n\n"RESET, nptr);
	printf(GREEN"FIND : %d\n"RESET, nb);
	printf(BLUE"\n----------------- end ----------------\n\n"RESET);
}

void	test_5_ft_atoi_isspace(void)
{
	const char nptr[50] = " 	\v  8";
	int		nb;

	nb = ft_atoi(nptr);
	printf(BLUE"--------------- ft_atoi ---------------\n\n"RESET);
	printf(YELLOW"TEST 5 : ISSPACE  \n\n"RESET);
	printf(MAGENTA"NPTR : %s\n\n"RESET, nptr);
	printf(GREEN"FIND : %d\n"RESET, nb);
	printf(BLUE"\n----------------- end ----------------\n\n"RESET);
}

void	test_5_ft_isspace(void)
{
	test_5_atoi_isspace();
	test_5_ft_atoi_isspace();
}
void	test_6_atoi_positive_overflow(void)
{
	const char nptr[50] = "9223372036854775808";
	int		nb;

	nb = atoi(nptr);
	printf(BLUE"----------------- atoi -----------------\n\n"RESET);
	printf(YELLOW"TEST 6 : POSITIVE OVERFLOW  \n\n"RESET);
	printf(MAGENTA"NPTR : %s\n\n"RESET, nptr);
	printf(GREEN"FIND : %d\n"RESET, nb);
	printf(BLUE"\n----------------- end ----------------\n\n"RESET);
}

void	test_6_ft_atoi_positive_overflow(void)
{
	const char nptr[50] = "9223372036854775808";
	int		nb;

	nb = ft_atoi(nptr);
	printf(BLUE"--------------- ft_atoi ---------------\n\n"RESET);
	printf(YELLOW"TEST 6 : POSITIVE OVERFLOW  \n\n"RESET);
	printf(MAGENTA"NPTR : %s\n\n"RESET, nptr);
	printf(GREEN"FIND : %d\n"RESET, nb);
	printf(BLUE"\n----------------- end ----------------\n\n"RESET);
}

void	test_6_positive_overflow(void)
{
	test_6_atoi_positive_overflow();
	test_6_ft_atoi_positive_overflow();
}

void	test_7_atoi_negative_overflow(void)
{
	const char nptr[50] = "-9223372036854775809";
	int		nb;

	nb = atoi(nptr);
	printf(BLUE"----------------- atoi -----------------\n\n"RESET);
	printf(YELLOW"TEST 6 : NEGATIVE OVERFLOW  \n\n"RESET);
	printf(MAGENTA"NPTR : %s\n\n"RESET, nptr);
	printf(GREEN"FIND : %d\n"RESET, nb);
	printf(BLUE"\n----------------- end ----------------\n\n"RESET);
}

void	test_7_ft_atoi_negative_overflow(void)
{
	const char nptr[50] = "-9223372036854775809";
	int		nb;

	nb = ft_atoi(nptr);
	printf(BLUE"--------------- ft_atoi ---------------\n\n"RESET);
	printf(YELLOW"TEST 6 : NEGATIVE OVERFLOW  \n\n"RESET);
	printf(MAGENTA"NPTR : %s\n\n"RESET, nptr);
	printf(GREEN"FIND : %d\n"RESET, nb);
	printf(BLUE"\n----------------- end ----------------\n\n"RESET);
}

void	test_7_negative_overflow(void)
{
	test_7_atoi_negative_overflow();
	test_7_ft_atoi_negative_overflow();
}

void	test_ft_atoi(void)
{
	// test_1_string_to_int();
	// test_2_with_negative_sign();
	// test_3_with_lot_of_0_and_one_plus();
	// test_4_francinette();
	// test_5_ft_isspace();
	// test_6_positive_overflow();
	test_7_negative_overflow();
}

// Test_6 : When I put the long positive maximal it return -1
		//	When I add 1 in the long maximal my function return 0
		
// Test 7 : When I have added -1 at the long minimal atoi return 0
		//	When I have added -1 at the long minimal ft_atoi return -1
