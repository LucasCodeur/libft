#include "test/functions_test.h"

void    test_ft_isalnum(void)
{
	printf(BLUE"------------------- TEST FT_ISALNUM -------------------\n"RESET);
	printf("\n");
	printf("TEST ALPHA_MINUS : \n\n ft_isalnum : %d\n isalnum : %d\n", ft_isalnum(TEST_ALPHA_MINUS), isalnum(TEST_ALPHA_MINUS));
	printf("\n");
	printf("TEST ALPHA_CAPITAL : \n\n ft_isalnum : %d\n isalnum : %d\n", ft_isalnum(TEST_ALPHA_CAPITAL), isalnum(TEST_ALPHA_CAPITAL));
	printf("\n");
	printf("TEST DIGIT : \n\n ft_isalnum : %d\n isalnum : %d\n", ft_isalnum(TEST_DIGIT), isalnum(TEST_DIGIT));
	printf("\n");
	printf("TEST WRONG CHARACTER : \n\n ft_isalnum : %d\n isalnum : %d\n", ft_isalnum(TEST_WRONG_CHARACTER), isalnum(TEST_WRONG_CHARACTER));
	printf(BLUE"\n------------------------- END --------------------------\n"RESET);
}