/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam <marvin@42.fr> >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:24:48 by lud-adam          #+#    #+#             */
/*   Updated: 2024/11/12 17:22:05 by lud-adam         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "functions_test.h"

void	test_1_strlcat_cat_partiel_of_src(void)
{
	const char	src[] = "karot";
	char	dest[20] = "ka";
    
	printf(BLUE"------------------- strlcat -------------------\n\n"RESET);
	printf("TEST 1 CAT PARTIEL OF THE SRC:  \n\n");
	printf(GREEN"DEST : %s\n\n"RESET, dest);
	printf(YELLOW"SRC : %s\n\n"RESET, src);
	printf(MAGENTA"Return : %zu\n\n", strlcat(dest, src, 4));
	printf(GREEN"DEST : %s"RESET, dest);
	printf("\n");
	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
}

void	test_1_ft_strlcat_cat_partiel_of_src(void)
{
	const char	src[] = "carotte";
	char	dest[10];
    
	printf(BLUE"------------------- ft_strlcat -------------------\n\n"RESET);
	printf("TEST 1 CAT PARTIEL OF THE SRC:  \n\n");
	printf(YELLOW"SRC : %s\n\n"RESET, src);
	printf(MAGENTA"Return : %zu\n\n", ft_strlcat(dest, src, 4));
	printf(GREEN"DEST : %s"RESET, dest);
	printf("\n");
	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
}

void	test_1_cat_cat_partiel_of_src(void)
{
	test_1_strlcat_cat_partiel_of_src();
	test_1_ft_strlcat_cat_partiel_of_src();
}

//Prove that there is just 3 characters that was copied inside dest either the number inside of size

void	test_2_strlcat_cat_full_of_src(void)
{
	const char	src[] = "karot";
	char	dest[8] = "ka";
    
	printf(BLUE"------------------- strlcat -------------------\n\n"RESET);
	printf("TEST 2 CAT FULL OF THE SRC :  \n\n");
	printf(GREEN"DEST : %s\n\n"RESET, dest);
	printf(YELLOW"SRC : %s\n\n"RESET, src);
    printf(MAGENTA"Return : %zu\n\n", strlcat(dest, src, 8));
	printf(GREEN"DEST : %s"RESET, dest);
	printf("\n");
	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
}

void	test_2_ft_strlcat_cat_full_of_src(void)
{
	const char	src[] = "karot";
	char	dest[8] = "ka";
    
	printf(BLUE"------------------- FT_strlcat -------------------\n\n"RESET);
	printf("TEST 2 CAT FULL OF THE SRC :  \n\n");
	printf(GREEN"DEST : %s\n\n"RESET, dest);
	printf(YELLOW"SRC : %s\n\n"RESET, src);
    printf(MAGENTA"Return : %zu\n\n", ft_strlcat(dest, src, 15));
	printf(GREEN"DEST : %s"RESET, dest);
	printf("\n");
	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
}

void	test_2_cat_cat_full_of_src(void)
{
	test_2_strlcat_cat_full_of_src();
	test_2_ft_strlcat_cat_full_of_src();
}

void	test_3_strlcat_cat_when_dest_is_to_small(void)
{
	const char	src[] = "karot";
	char	dest[4] = "ka";
    
	printf(BLUE"------------------- strlcat -------------------\n\n"RESET);
	printf("TEST 3 CAT WHEN DEST IS TO SMALL :  \n\n");
	printf(GREEN"DEST : %s\n\n"RESET, dest);
	printf(YELLOW"SRC : %s\n\n"RESET, src);
    printf(MAGENTA"Return : %zu\n\n", strlcat(dest, src, 5));
	printf(GREEN"DEST : %s"RESET, dest);
	printf("\n");
	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
}

void	test_3_ft_strlcat_cat_when_dest_is_to_small(void)
{
	const char	src[] = "karot";
	char	dest[4] = "ka";
    
	printf(BLUE"------------------- ft_strlcat -------------------\n\n"RESET);
	printf("TEST 3 CAT WHEN DEST IS TO SMALL :  \n\n");
	printf(GREEN"DEST : %s\n\n"RESET, dest);
	printf(YELLOW"SRC : %s\n\n"RESET, src);
    printf(MAGENTA"Return : %zu\n\n", ft_strlcat(dest, src, 5));
	printf(GREEN"DEST : %s"RESET, dest);
	printf("\n");
	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
}

void	test_3_cat_cat_when_dest_is_to_small(void)
{
	test_3_strlcat_cat_when_dest_is_to_small();
	test_3_ft_strlcat_cat_when_dest_is_to_small();
}


void	test_4_strlcat_when_dest_is_bigger_that_src_and_size_smaller(void)
{
	const char	src[] = "karot"; // 5
	char	dest[30] = "the best fighter is ka"; // 22
    
	printf(BLUE"----------------- strlcat -----------------\n\n"RESET);
	printf("TEST 4 CAT WHEN DEST IS BIGGER THAT SRC AND SIZE SMALLER :  \n\n");
	printf(GREEN"DEST : %s\n\n"RESET, dest);
	printf(YELLOW"SRC : %s\n\n"RESET, src);
    printf(MAGENTA"Return : %zu\n\n", strlcat(dest, src, 10));
	printf(GREEN"DEST : %s"RESET, dest);
	printf("\n");
	printf(BLUE"\n--------------------- end --------------------\n\n"RESET);
}

void	test_4_ft_strlcat_when_dest_is_bigger_that_src_and_size_smaller(void)
{
	const char	src[] = "karot";
	char	dest[30] = "the best fighter is ka";
    
	printf(BLUE"----------------- ft_strlcat -----------------\n\n"RESET);
	printf("TEST 4 CAT WHEN DEST IS BIGGER THAT SRC AND SIZE SMALLER :  \n\n");
	printf(GREEN"DEST : %s\n\n"RESET, dest);
	printf(YELLOW"SRC : %s\n\n"RESET, src);
    printf(MAGENTA"Return : %zu\n\n", ft_strlcat(dest, src, 10));
	printf(GREEN"DEST : %s"RESET, dest);
	printf("\n");
	printf(BLUE"\n--------------------- end --------------------\n\n"RESET);
}

void	test_4_cat_when_dest_is_bigger_that_src_and_size_smaller(void)
{
	test_4_strlcat_when_dest_is_bigger_that_src_and_size_smaller();
	test_4_ft_strlcat_when_dest_is_bigger_that_src_and_size_smaller();
}

void	test_5_strlcat_is_equal_to_0(void)
{
	const char	src[] = "karot";
	char	dest[30] = "the best fighter is ka";
    
	printf(BLUE"----------------- strlcat -----------------\n\n"RESET);
	printf("TEST 5 IS EQUAL TO 0 :  \n\n");
	printf(GREEN"DEST : %s\n\n"RESET, dest);
	printf(YELLOW"SRC : %s\n\n"RESET, src);
    printf(MAGENTA"Return : %zu\n\n", ft_strlcat(dest, src, 0));
	printf(GREEN"DEST : %s"RESET, dest);
	printf("\n");
	printf(BLUE"\n--------------------- end --------------------\n\n"RESET);
}

void	test_5_ft_strlcat_is_equal_to_0(void)
{
	const char	src[] = "karot";
	char	dest[30] = "the best fighter is ka";
    
	printf(BLUE"----------------- ft_strlcat -----------------\n\n"RESET);
	printf("TEST 5 IS EQUAL TO 0 :  \n\n");
	printf(GREEN"DEST : %s\n\n"RESET, dest);
	printf(YELLOW"SRC : %s\n\n"RESET, src);
    printf(MAGENTA"Return : %zu\n\n", ft_strlcat(dest, src, 0));
	printf(GREEN"DEST : %s"RESET, dest);
	printf("\n");
	printf(BLUE"\n--------------------- end --------------------\n\n"RESET);
}

void	test_5_cat_size_equal_0(void)
{
	test_5_strlcat_is_equal_to_0();
	test_5_ft_strlcat_is_equal_to_0();
}

void	test_6_strlcat_src_is_empty(void)
{
	const char	src[] = "";
	char	dest[30] = "the best fighter is ka";
    
	printf(BLUE"----------------- strlcat -----------------\n\n"RESET);
	printf("TEST 6 SRC IS EMPTY :  \n\n");
	printf(GREEN"DEST : %s\n\n"RESET, dest);
	printf(YELLOW"SRC : %s\n\n"RESET, src);
    printf(MAGENTA"Return : %zu\n\n", strlcat(dest, src, 10));
	printf(GREEN"DEST : %s"RESET, dest);
	printf("\n");
	printf(BLUE"\n--------------------- end --------------------\n\n"RESET);
}

void	test_6_ft_strlcat_src_is_empty(void)
{
	const char	src[] = "";
	char	dest[30] = "the best fighter is ka";
    
	printf(BLUE"----------------- ft_strlcat -----------------\n\n"RESET);
	printf("TEST 6 SRC IS EMPTY :  \n\n");
	printf(GREEN"DEST : %s\n\n"RESET, dest);
	printf(YELLOW"SRC : %s\n\n"RESET, src);
    printf(MAGENTA"Return : %zu\n\n", ft_strlcat(dest, src, 10));
	printf(GREEN"DEST : %s"RESET, dest);
	printf("\n");
	printf(BLUE"\n--------------------- end --------------------\n\n"RESET);
}

void	test_6_cat_src_is_empty(void)
{
	test_6_strlcat_src_is_empty();
	test_6_ft_strlcat_src_is_empty();
}

void	test_7_strlcat_size_is_negative(void)
{
	const char	src[] = "Manga";
	char	dest[10];
    
	printf(BLUE"----------------- strlcat ---------------\n\n"RESET);
	printf("TEST 7 : Size is negative \n\n");
	printf(YELLOW"SRC : %s\n\n"RESET, src);
    printf(MAGENTA"Return : %zu\n\n", strlcat(dest, src, -1));
	printf(GREEN"DEST : %s"RESET, dest);
	printf("\n");
	printf(BLUE"\n------------------ end ------------------\n\n"RESET);
}

void	test_7_ft_strlcat_size_is_negative(void)
{
	const char	src[] = "Manga";
	char	dest[10];
    
	printf(BLUE"--------------- FT_strlcat --------------\n\n"RESET);
	printf("TEST 7 : Size is negative  \n\n");
	printf(YELLOW"SRC : %s\n\n"RESET, src);
    printf(MAGENTA"Return : %zu\n\n", ft_strlcat(dest, src, -1));
	printf(GREEN"DEST : %s"RESET, dest);
	printf("\n");
	printf(BLUE"\n------------------ end ------------------\n\n"RESET);
}

void	test_7_cat_size_is_negative(void)
{
	test_7_strlcat_size_is_negative();
	test_7_ft_strlcat_size_is_negative();
}

void	test_9_strlcat_lorem(void)
{
	const char	src[] = "lorem";
	char	dest[10];
    
	printf(BLUE"--------------- strlcat --------------\n\n"RESET);
	printf("TEST 9 : lorem  \n\n");
	printf(YELLOW"SRC : %s\n\n"RESET, src);
    printf(MAGENTA"Return : %zu\n\n", strlcat(dest, src, 15));
	printf(GREEN"DEST : %s"RESET, dest);
	printf("\n");
	printf(BLUE"\n------------------ end ------------------\n\n"RESET);
}

void	test_9_ft_strlcat_lorem(void)
{
	const char	src[] = "lorem";
	char	dest[10];
    
	printf(BLUE"--------------- FT_strlcat --------------\n\n"RESET);
	printf("TEST 9 : lorem  \n\n");
	printf(YELLOW"SRC : %s\n\n"RESET, src);
    printf(MAGENTA"Return : %zu\n\n", ft_strlcat(dest, src, 6));
	printf(GREEN"DEST : %s"RESET, dest);
	printf("\n");
	printf(BLUE"\n------------------ end ------------------\n\n"RESET);
}

void	test_9_cat_lorem(void)
{
	test_9_strlcat_lorem();
	test_9_ft_strlcat_lorem();
}

void    test_ft_strlcat(void)
{
    // test_1_cat_cat_partiel_of_src();
    // test_2_cat_cat_full_of_src();
    // test_3_cat_cat_when_dest_is_to_small();
	// test_4_cat_when_dest_is_bigger_that_src_and_size_smaller();
    // test_5_cat_size_equal_0();
    // test_6_cat_src_is_empty();
	test_7_cat_size_is_negative();
	// test_9_cat_lorem();
}

