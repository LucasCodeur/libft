#include "test/functions_test.h"

void		test_ft_isalpha(void)
{
	printf(BLUE"\n------------------- TEST FT_ISALPHA -------------------\n"RESET);
	printf("\n");
	printf("TEST ALPHA_MINUS : \n\n ft_isalpha : %d\n isalpha : %d\n", ft_isalpha(TEST_ALPHA_MINUS), isalpha(TEST_ALPHA_MINUS));
	printf("\n");
	printf("TEST ALPHA_CAPITAL : \n\n ft_isalpha : %d\n isalpha : %d\n", ft_isalpha(TEST_ALPHA_CAPITAL), isalpha(TEST_ALPHA_CAPITAL));
	printf("\n");
	printf("TEST WRONG CHARACTER : \n\n ft_isalpha : %d\n isalpha : %d\n", ft_isalpha(TEST_WRONG_CHARACTER), isalpha(TEST_WRONG_CHARACTER));
	printf(BLUE"\n------------------------- END --------------------------\n"RESET);
}