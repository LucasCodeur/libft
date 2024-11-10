#include "test/functions_test.h"

void	test_1_same_size(void)
{
	char	str1[] = "Luffy";
	char	str2[] = "Zoro!";

	printf(BLUE"------------------- TEST FT_MEMMOVE -------------------\n\n"RESET);
	printf("TEST 1 : SAME SIZE FOR TWO STRINGS");
	printf(YELLOW"Before memmove : \n\n"RESET);
	printf(RED"DEST : %s\n\n"RESET, str1);
	memmove(str1, str2, sizeof(str2));
	printf(YELLOW"After memmove : \n\n"RESET);
	printf(GREEN"DEST : %s"RESET, str1);
	printf("\n");
	printf(BLUE"\n------------------------- END --------------------------\n\n"RESET);
}

void	test_2_dest_have_smaller_size_than_src(void)
{
	char	str1[] = "Luff";
	char	str2[] = "Zoro!";

	printf(BLUE"------------------- TEST FT_MEMMOVE -------------------\n\n"RESET);
	printf("TEST 2 : DEST HAVE SMALLER SIZE THAN SRC ");
	printf(YELLOW"Before memmove : \n\n"RESET);
	printf(RED"DEST : %s\n\n"RESET, str1);
	memmove(str1, str2, sizeof(str2));
	printf(YELLOW"After memmove : \n\n"RESET);
	printf(GREEN"DEST : %s"RESET, str1);
	printf("\n");
	printf(BLUE"\n------------------------- END --------------------------\n"RESET);
}

void	test_3_bigger_size_for_dest(void)
{
	char	str1[] = "Luffy";
	char	str2[] = "Zoro";

	printf(BLUE"------------------- TEST FT_MEMMOVE -------------------\n\n"RESET);
	printf("TEST 3: DEST HAVE A BIGGER SIZE \n\n");
	printf(YELLOW"Before memmove : \n\n"RESET);
	printf(RED"DEST : %s\n\n"RESET, str1);
	memmove(str1, str2, sizeof(str2));
	printf(YELLOW"After memmove : \n\n"RESET);
	printf(GREEN"DEST : %s"RESET, str1);
	printf("\n");
	printf(BLUE"\n------------------------- END --------------------------\n\n"RESET);
}

void	test_4_overlapping(void)
{
	char	str1[] = "Luffy";

	printf(BLUE"------------------- TEST FT_MEMMOVE -------------------\n\n"RESET);
	printf("TEST 4 : OVERLAPPING \n\n");
	printf(YELLOW"Before memmove : \n\n"RESET);
	printf(RED"DEST : %s\n\n"RESET, str1);
	memmove(str1, str1 + 1, 3);
	printf(YELLOW"After memmove : \n\n"RESET);
	printf(GREEN"DEST : %s"RESET, str1);
	printf("\n");
	printf(BLUE"\n------------------------- END --------------------------\n\n"RESET);
}
void	test_5_if_size_is_0(void)
{
	char	str1[] = "Luffy";

	printf(BLUE"------------------- TEST FT_MEMMOVE -------------------\n\n"RESET);
	printf("TEST 5 : SIZE IS 0 \n\n");
	printf(YELLOW"Before memmove : \n\n"RESET);
	printf(RED"DEST : %s\n\n"RESET, str1);
	memmove(str1, str1 + 1, 0);
	printf(YELLOW"After memmove : \n\n"RESET);
	printf(GREEN"DEST : %s"RESET, str1);
	printf("\n");
	printf(BLUE"\n------------------------- END --------------------------\n\n"RESET);
}

void	test_6_if_the_size_is_bigger_of_the_strings(void)
{
	char	str1[] = "Luffy";

	printf(BLUE"------------------- TEST FT_MEMMOVE -------------------\n\n"RESET);
	printf("TEST 6 : IF SIZE IS BIGGER THE TWO STRINGS \n\n");
	printf(YELLOW"Before memmove : \n\n"RESET);
	printf(RED"DEST : %s\n\n"RESET, str1);
	memmove(str1, str1 + 1, 10);
	printf(YELLOW"After memmove : \n\n"RESET);
	printf(GREEN"DEST : %s"RESET, str1);
	printf("\n");
	printf(BLUE"\n------------------------- END --------------------------\n\n"RESET);
}

void	test_ft_memmove(void)
{
	// test_1_same_size();
	// test_2_dest_have_smaller_size_than_src();
	// test_3_bigger_size_for_dest();
	// test_4_overlapping();
	// test_5_if_size_is_0();
	// test_6_if_the_size_is_bigger_of_the_strings();
}

// if dest is more smaller than src I don't have to handle it, I have to let the overflow
// If the string of src is smaller than the string of dest, the string of dest must have the same size
// if the two strings have the same size memmove act memcpy
// I have to handle overlapping, I can give to memmove the same string for dest and src, if i give src + 2 to memmove, it must handle to copy from src + 2 without corrupt the data 
	//(erase the current date than memmove must copy)
// If the size is 0 you must have no change
// If the size of the size we have to copy is bigger than the two string, there is an overflow and I haven't to handle it