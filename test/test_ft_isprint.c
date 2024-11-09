#include "test/functions_test.h"

void    test_ft_isprint(void)
{
    printf(BLUE"\n------------------- TEST FT_ISPRINT -------------------\n"RESET);
	printf("\n");
	printf("TEST ALPHA_MINUS : \n\n ft_isprint : %d\n isprint : %d\n", ft_isprint(TEST_ALPHA_MINUS), isprint(TEST_ALPHA_MINUS));
	printf("\n");
	printf("TEST ALPHA_CAPITAL : \n\n ft_isprint : %d\n isprint : %d\n", ft_isprint(TEST_ALPHA_CAPITAL), isprint(TEST_ALPHA_CAPITAL));
	printf("\n");
	printf("TEST DIGIT : \n\n ft_isprint : %d\n isprint : %d\n", ft_isprint(TEST_DIGIT), isprint(TEST_DIGIT));
	printf("\n");
	printf("TEST WHITE SPACE : \n\n ft_isprint : %d\n isprint : %d\n", ft_isprint(TEST_WHITE_SPACE), isprint(TEST_WHITE_SPACE));
	printf("\n");
	printf("TEST SPECIAL CHARACTER : \n\n ft_isprint : %d\n isprint : %d\n", ft_isprint(TEST_SPECIAL_CHARACTER), isprint(TEST_SPECIAL_CHARACTER));
	printf("\n");
	printf("TEST END SPECIAL CHARACTER : \n\n ft_isprint : %d\n isprint : %d\n", ft_isprint(TEST_END_SPECIAL_CHARACTER), isprint(TEST_END_SPECIAL_CHARACTER));
	printf("\n");
	printf("TEST WRONG CHARACTER : \n\n ft_isprint : %d\n isprint : %d\n", ft_isprint('\t'), isprint('\t'));
	printf(BLUE"\n------------------------- END --------------------------\n"RESET);
}