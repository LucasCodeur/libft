#include "test/functions_test.h"

void		test_ft_isdigit(void)
{
	printf(BLUE"\n------------------- TEST FT_ISDIGIT -------------------\n"RESET);
	printf("\n");
	printf("TEST DIGIT : \n\n ft_isdigit : %d\n isdigit : %d\n", ft_isdigit(TEST_DIGIT), isdigit(TEST_DIGIT));
	printf("\n");
	printf("TEST WRONG CHARACTER : \n\n ft_isdigit : %d\n isdigit : %d\n", ft_isdigit(TEST_WRONG_CHARACTER), isdigit(TEST_WRONG_CHARACTER));
	printf(BLUE"\n------------------------- END --------------------------\n"RESET);
}