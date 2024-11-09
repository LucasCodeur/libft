#include "test/functions_test.h"
void	test_ft_strlen(void)
{
	printf(BLUE"------------------- TEST FT_STRLEN -------------------\n"RESET);
	printf("TEST COUNT SIZE STRING  : \n\n ft_strlen : %zu\n strlen : %zu\n", ft_strlen(TEST_STRING), strlen(TEST_STRING));
	printf(BLUE"\n------------------------- END --------------------------\n"RESET);
}