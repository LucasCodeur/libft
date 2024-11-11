/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam <marvin@42.fr> >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:24:48 by lud-adam          #+#    #+#             */
/*   Updated: 2024/11/11 19:59:05 by lud-adam         ###   ########lyon.fr   */
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

void	test_4_copy_when_dest_is_bigger_that_src_and_size_smaller(void)
{
	const char	src[] = "I love potatoes";
	char	dest[30];
    
	printf(BLUE"------------------- STRLCPY -------------------\n\n"RESET);
	printf("TEST 3 COPY WHEN DEST IS BIGGER THAT SRC AND SIZE SMALLER :  \n\n");
	printf(YELLOW"SRC : %s\n\n"RESET, src);
    printf(MAGENTA"Return : %zu\n\n", strlcpy(dest, src, 10));
	printf(GREEN"DEST : %s"RESET, dest);
	printf("\n");
	printf(BLUE"\n--------------------- END ---------------------\n\n"RESET);
}

void	test_5_size_equal_0(void)
{
	const char	src[] = "I love potatoes";
	char	dest[30];
    
	printf(BLUE"------------------- STRLCPY -------------------\n\n"RESET);
	printf("TEST 5 : SIZE IS EQUAL TO 0 \n\n");
	printf(YELLOW"SRC : %s\n\n"RESET, src);
    printf(MAGENTA"Return : %zu\n\n", strlcpy(dest, src, 0));
	printf(GREEN"DEST : %s"RESET, dest);
	printf("\n");
	printf(BLUE"\n--------------------- END ---------------------\n\n"RESET);
}

void	test_6_src_is_empty(void)
{
	const char	src[] = "";
	char	dest[30];
    
	printf(BLUE"------------------- STRLCPY -------------------\n\n"RESET);
	printf("TEST 6 : SRC IS EMPTY \n\n");
	printf(YELLOW"SRC : %s\n\n"RESET, src);
    printf(MAGENTA"Return : %zu\n\n", strlcpy(dest, src, 10));
	printf(GREEN"DEST : %s"RESET, dest);
	printf("\n");
	printf(BLUE"\n--------------------- END ---------------------\n\n"RESET);
}

void    test_ft_strlcpy(void)
{
    // test_1_copy_partiel_of_the_src();
    // test_2_copy_full_of_src();
    // test_3_copy_when_dest_is_to_small();
    // test_4_copy_when_dest_is_bigger_that_src_and_size_smaller();
    test_5_size_equal_0();
    // test_6_src_is_empty();
}

// When you put a size it will copy -1 character (probably to assure a non null character)
// The value of the return is the size of the src string without the null terminated
// Test 3 : If the dest string is more smaller that src, it will still take the entire src string and return the same 
//      size that src string
// Test 4 : The string dest is the same that src string
// Test 5 : The string dest has just @ inside so it normally copy nothing, but I don´t why there is a @
// Test 6 : dest is empty and return is 0
