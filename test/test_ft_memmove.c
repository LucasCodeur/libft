#include "test/functions_test.h"

void	test_1_memmove_same_size(void)
{
	char	str1[] = "Luffy";
	char	str2[] = "Zoro!";

	printf(BLUE"------------------- TEST MEMMOVE -------------------\n\n"RESET);
	printf("TEST 1 : SAME SIZE FOR TWO STRINGS\n\n");
	printf(YELLOW"Before memmove : \n\n"RESET);
	printf(RED"DEST : %s\n\n"RESET, str1);
	memmove(str1, str2, sizeof(str2));
	printf(YELLOW"After memmove : \n\n"RESET);
	printf(GREEN"DEST : %s"RESET, str1);
	printf("\n");
	printf(BLUE"\n------------------------- END --------------------------\n\n"RESET);
}

void	test_1_ft_memmove_same_size(void)
{
	char	str1[] = "Luffy";
	char	str2[] = "Zoro!";

	printf(BLUE"------------------- TEST FT_MEMMOVE -------------------\n\n"RESET);
	printf("TEST 1 : SAME SIZE FOR TWO STRINGS\n\n");
	printf(YELLOW"Before ft_memmove : \n\n"RESET);
	printf(RED"DEST : %s\n\n"RESET, str1);
	ft_memmove(str1, str2, sizeof(str2));
	printf(YELLOW"After ft_memmove : \n\n"RESET);
	printf(GREEN"DEST : %s"RESET, str1);
	printf("\n");
	printf(BLUE"\n------------------------- END --------------------------\n\n"RESET);
}

void	test_1_same_size(void)
{
	test_1_memmove_same_size();
	test_1_ft_memmove_same_size();
}

// void	test_2_dest_have_smaller_size_than_src(void)
// {
// 	char	str1[] = "Luff";
// 	char	str2[] = "Zoro!";

// 	printf(BLUE"------------------- TEST FT_MEMMOVE -------------------\n\n"RESET);
// 	printf("TEST 2 : DEST HAVE SMALLER SIZE THAN SRC ");
// 	printf(YELLOW"Before memmove : \n\n"RESET);
// 	printf(RED"DEST : %s\n\n"RESET, str1);
// 	memmove(str1, str2, sizeof(str2));
// 	printf(YELLOW"After memmove : \n\n"RESET);
// 	printf(GREEN"DEST : %s"RESET, str1);
// 	printf("\n");
// 	printf(BLUE"\n------------------------- END --------------------------\n"RESET);
// }

void	test_3_memmove_bigger_size_for_dest(void)
{
	char	str1[] = "Luffy";
	char	str2[] = "Zoro";

	printf(BLUE"------------------- TEST MEMMOVE -------------------\n\n"RESET);
	printf("TEST 3: DEST HAVE A BIGGER SIZE \n\n");
	printf(YELLOW"Before memmove : \n\n"RESET);
	printf(RED"DEST : %s\n\n"RESET, str1);
	memmove(str1, str2, sizeof(str2));
	printf(YELLOW"After memmove : \n\n"RESET);
	printf(GREEN"DEST : %s"RESET, str1);
	printf("\n");
	printf(BLUE"\n------------------------- END --------------------------\n\n"RESET);
}

void	test_3_ft_memmove_bigger_size_for_dest(void)
{
	char	str1[] = "Luffy";
	char	str2[] = "Zoro";

	printf(BLUE"------------------- TEST FT_MEMMOVE -------------------\n\n"RESET);
	printf("TEST 3: DEST HAVE A BIGGER SIZE \n\n");
	printf(YELLOW"Before ft_memmove : \n\n"RESET);
	printf(RED"DEST : %s\n\n"RESET, str1);
	memmove(str1, str2, sizeof(str2));
	printf(YELLOW"After ft_memmove : \n\n"RESET);
	printf(GREEN"DEST : %s"RESET, str1);
	printf("\n");
	printf(BLUE"\n------------------------- END --------------------------\n\n"RESET);
}

void	test_3_bigger_size_for_dest(void)
{
	test_3_memmove_bigger_size_for_dest();
	test_3_ft_memmove_bigger_size_for_dest();
}

void	test_4_memmove_overlapping(void)
{
	char	str1[] = "karotte";

	printf(BLUE"------------------- TEST MEMMOVE -------------------\n\n"RESET);
	printf("TEST 4 : OVERLAPPING \n\n");
	printf(YELLOW"Before memmove : \n\n"RESET);
	printf(RED"DEST : %s\n\n"RESET, str1);
	memmove(str1 + 2, str1, 5);
	printf("%p", str1);
	printf(YELLOW"After memmove : \n\n"RESET);
	printf(GREEN"DEST : %s"RESET, str1);
	printf("\n");
	printf(BLUE"\n------------------------- END --------------------------\n\n"RESET);
}

void	test_4_ft_memmove_overlapping(void)
{
	char	str1[] = "karotte";

	printf(BLUE"------------------- TEST FT_MEMMOVE -------------------\n\n"RESET);
	printf("TEST 4 : OVERLAPPING \n\n");
	printf(YELLOW"Before ft_memmove : \n\n"RESET);
	printf(RED"DEST : %s\n\n"RESET, str1);
	ft_memmove(str1 + 2, str1, 5);
	printf(YELLOW"After ft_memmove : \n\n"RESET);
	printf(GREEN"DEST : %s"RESET, str1);
	printf("\n");
	printf(BLUE"\n------------------------- END --------------------------\n\n"RESET);
}

void	test_4_overlapping(void)
{
	test_4_memmove_overlapping();
	test_4_ft_memmove_overlapping();
}
void	test_5_memmove_if_size_is_0(void)
{
	char	str1[] = "Luffy";

	printf(BLUE"------------------- TEST MEMMOVE -------------------\n\n"RESET);
	printf("TEST 5 : SIZE IS 0 \n\n");
	printf(YELLOW"Before memmove : \n\n"RESET);
	printf(RED"DEST : %s\n\n"RESET, str1);
	memmove(str1, str1 + 1, 0);
	printf(YELLOW"After memmove : \n\n"RESET);
	printf(GREEN"DEST : %s"RESET, str1);
	printf("\n");
	printf(BLUE"\n------------------------- END --------------------------\n\n"RESET);
}

void	test_5_ft_memmove_if_size_is_0(void)
{
	char	str1[] = "Luffy";

	printf(BLUE"------------------- TEST FT_MEMMOVE -------------------\n\n"RESET);
	printf("TEST 5 : SIZE IS 0 \n\n");
	printf(YELLOW"Before ft_memmove : \n\n"RESET);
	printf(RED"DEST : %s\n\n"RESET, str1);
	ft_memmove(str1, str1 + 1, 0);
	printf(YELLOW"After ft_memmove : \n\n"RESET);
	printf(GREEN"DEST : %s"RESET, str1);
	printf("\n");
	printf(BLUE"\n------------------------- END --------------------------\n\n"RESET);
}

void	test_5_if_size_is_0(void)
{
	test_5_memmove_if_size_is_0();
	test_5_ft_memmove_if_size_is_0();
}

// void	test_6_if_the_size_is_bigger_of_the_strings(void)
// {
// 	char	str1[] = "Luffy";

// 	printf(BLUE"------------------- TEST FT_MEMMOVE -------------------\n\n"RESET);
// 	printf("TEST 6 : IF SIZE IS BIGGER THE TWO STRINGS \n\n");
// 	printf(YELLOW"Before memmove : \n\n"RESET);
// 	printf(RED"DEST : %s\n\n"RESET, str1);
// 	memmove(str1, str1 + 1, 10);
// 	printf(YELLOW"After memmove : \n\n"RESET);
// 	printf(GREEN"DEST : %s"RESET, str1);
// 	printf("\n");
// 	printf(BLUE"\n------------------------- END --------------------------\n\n"RESET);
// }

// void	test_7_if_src_is_null(void)
// {
// 	char	str1[] = "";

// 	printf(BLUE"------------------- TEST FT_MEMMOVE -------------------\n\n"RESET);
// 	printf("TEST 7 : IF SRC IS NULL \n\n");
// 	printf(YELLOW"Before memmove : \n\n"RESET);
// 	printf(RED"DEST : %s\n\n"RESET, str1);
// 	memmove(str1, str1 + 1, 1);
// 	printf(YELLOW"After memmove : \n\n"RESET);
// 	printf(GREEN"DEST : %s"RESET, str1);
// 	printf("\n");
// 	printf(BLUE"\n------------------------- END --------------------------\n\n"RESET);
// }

// void	test_8_if_dest_is_null(void)
// {
// 	char	str1[] = "";
// 	char	str2[] = "zoro";

// 	printf(BLUE"------------------- TEST FT_MEMMOVE -------------------\n\n"RESET);
// 	printf("TEST 8: IF DEST IS NULL \n\n");
// 	printf(YELLOW"Before memmove : \n\n"RESET);
// 	printf(RED"DEST : %s\n\n"RESET, str1);
// 	memmove(str1, str2, sizeof(str2));
// 	printf(YELLOW"After memmove : \n\n"RESET);
// 	printf(GREEN"DEST : %s"RESET, str1);
// 	printf("\n");
// 	printf(BLUE"\n------------------------- END --------------------------\n\n"RESET);
// }

void	test_9_memmove_francinette(void)
{
	char	src[] = "lorem ipsum dolor sit amet";
	char	*dest;

	dest = src + 1;
	printf(BLUE"------------------- FT_MEMMOVE -------------------\n\n"RESET);
	printf("TEST 9 : FRANCINETTE \n\n");
	printf(YELLOW"Before memmove : \n\n"RESET);
	printf(RED"DEST : %s\n\n"RESET, src);
	memmove(src, dest, 8);
	printf(YELLOW"After memmove : \n\n"RESET);
	printf(GREEN"DEST : %s"RESET, dest);
	printf("\n");
	printf(BLUE"\n------------------------- END --------------------------\n\n"RESET);
}
void	test_9_ft_memmove_francinette(void)
{
	char	src[] = "lorem ipsum dolor sit amet";
	char	*dest;

	dest = src + 1;
	printf(BLUE"------------------- TEST FT_MEMMOVE -------------------\n\n"RESET);
	printf("TEST 9: FRANCINETTE \n\n");
	printf(YELLOW"Before memmove : \n\n"RESET);
	printf(RED"DEST : %s\n\n"RESET, src);
	ft_memmove(src, dest, 8);
	printf(YELLOW"After memmove : \n\n"RESET);
	printf(GREEN"DEST : %s"RESET, dest);
	printf("\n");
	printf(BLUE"\n------------------------- END --------------------------\n\n"RESET);
}

void	ft_test_9_francinette(void)
{
	test_9_memmove_francinette();
	test_9_ft_memmove_francinette();
}

void	test_ft_memmove(void)
{
	// test_1_same_size();
	// test_2_dest_have_smaller_size_than_src();
	// test_3_bigger_size_for_dest();
	// test_4_overlapping();
	// test_5_if_size_is_0();
	// test_6_if_the_size_is_bigger_of_the_strings();
	// test_7_if_src_is_null();
	// test_8_if_dest_is_null();
	ft_test_9_francinette();
}

// if dest is more smaller than src I don't have to handle it, I have to let the overflow
// If the string of src is smaller than the string of dest, the string of dest must have the same size
// if the two strings have the same size memmove act memcpy
// I have to handle overlapping, I can give to memmove the same string for dest and src, if i give src + 2 to memmove, it must handle to copy from src + 2 without corrupt the data 
	//(erase the current date than memmove must copy)
// If the size is 0 you must have no change
// If the size of the size we have to copy is bigger than the two string, there is an overflow and I haven't to handle it
// If src is null the compilator left an error saying we try to reading 1 bytes from a region of size 0
// If dest is null the compilator said I try to writing 5 bytes into a region of size 1 overlows the destination