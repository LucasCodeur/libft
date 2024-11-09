#include "test/functions_test.h"

void    test_ft_isascii(void)
{
    printf(BLUE"------------------- TEST FT_ISASCII -------------------\n"RESET);
	printf("\n");
	printf("TEST ALPHA_MINUS : \n\n ft_isascii : %d\n isascii : %d\n", ft_isascii(TEST_ALPHA_MINUS), isascii(TEST_ALPHA_MINUS));
	printf("\n");
	printf("TEST ALPHA_CAPITAL : \n\n ft_isascii : %d\n isascii : %d\n", ft_isascii(TEST_ALPHA_CAPITAL), isascii(TEST_ALPHA_CAPITAL));
	printf("\n");
	printf("TEST DIGIT : \n\n ft_isascii : %d\n isascii : %d\n", ft_isascii(TEST_ALPHA_CAPITAL), isascii(TEST_ALPHA_CAPITAL));
	printf("\n");
	printf("TEST WHITE SPACE : \n\n ft_isascii : %d\n isascii : %d\n", ft_isascii(TEST_WHITE_SPACE), isascii(TEST_WHITE_SPACE));
	printf("\n");
	printf("TEST SPECIAL CHARACTER : \n\n ft_isascii : %d\n isascii : %d\n", ft_isascii(TEST_SPECIAL_CHARACTER), isascii(TEST_SPECIAL_CHARACTER));
	printf("\n");
	printf("TEST END SPECIAL CHARACTER : \n\n ft_isascii : %d\n isascii : %d\n", ft_isascii(TEST_END_SPECIAL_CHARACTER), isascii(TEST_END_SPECIAL_CHARACTER));
	printf("\n");
	printf("TEST WRONG CHARACTER : \n\n ft_isascii : %d\n isascii : %d\n", ft_isascii(TEST_WRONG_CHARACTER), isascii(TEST_WRONG_CHARACTER));
	printf(BG_BLUE"\n------------------------- END --------------------------\n"RESET);
}