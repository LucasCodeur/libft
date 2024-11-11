/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam <marvin@42.fr> >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:24:48 by lud-adam          #+#    #+#             */
/*   Updated: 2024/11/11 19:20:07 by lud-adam         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "functions_test.h"

void	test_1_copy_partiel_of_src(void)
{
	const char	src[] = "I love potatoes";
	char	dest[19];
    
	printf(BLUE"------------------- STRLCPY -------------------\n\n"RESET);
	printf("TEST 1 COPY PARTIEL OF THE SRC:  \n\n");
	printf(YELLOW"SRC : %s\n\n"RESET, src);
	printf(MAGENTA"Return : %zu\n\n", strlcpy(dest, src, 9));
	printf(GREEN"DEST : %s"RESET, dest);
	printf("\n");
	printf(BLUE"\n--------------------- END ---------------------\n\n"RESET);
}

void	test_2_copy_full_of_src(void)
{
	const char	src[] = "I love potatoes";
	char	dest[16];
    
	printf(BLUE"------------------- STRLCPY -------------------\n\n"RESET);
	printf("TEST 2 COPY FULL OF THE SRC :  \n\n");
	printf(YELLOW"SRC : %s\n\n"RESET, src);
    printf(MAGENTA"Return : %zu\n\n", strlcpy(dest, src, 16));
	printf(GREEN"DEST : %s"RESET, dest);
	printf("\n");
	printf(BLUE"\n--------------------- END ---------------------\n\n"RESET);
}

void	test_3_copy_when_dest_is_to_small(void)
{
	const char	src[] = "I love potatoes";
	char	dest[10];
    
	printf(BLUE"------------------- STRLCPY -------------------\n\n"RESET);
	printf("TEST 3 COPY WHEN DEST IS TO SMALL :  \n\n");
	printf(YELLOW"SRC : %s\n\n"RESET, src);
    printf(MAGENTA"Return : %zu\n\n", strlcpy(dest, src, 16));
	printf(GREEN"DEST : %s"RESET, dest);
	printf("\n");
	printf(BLUE"\n--------------------- END ---------------------\n\n"RESET);
}

void	test_4_copy_when_dest_is_more_bigger_that_src_and_the_number_of_size_is_more_smaller(void)
{
	const char	src[] = "I love potatoes";
	char	dest[10];
    
	printf(BLUE"------------------- STRLCPY -------------------\n\n"RESET);
	printf("TEST 3 COPY WHEN DEST IS TO SMALL :  \n\n");
	printf(YELLOW"SRC : %s\n\n"RESET, src);
    printf(MAGENTA"Return : %zu\n\n", strlcpy(dest, src, 16));
	printf(GREEN"DEST : %s"RESET, dest);
	printf("\n");
	printf(BLUE"\n--------------------- END ---------------------\n\n"RESET);
}

void    test_ft_strlcpy(void)
{
    // test_1_copy_partiel_of_the_src();
    // test_2_copy_full_of_src();
    // test_3_copy_when_dest_is_to_small();
    test_4_copy_when_dest_is_more_bigger_that_src_and_the_number_of_size_is_more_smaller();
}

// When you put a size it will copy -1 character (probably to assure a non null character)
// The value of the return is the size of the src string without the null terminated
// Test 3 : if the dest string is more smaller that src, it will still take the entire src string and return the same 
//      size that src string
