#include "test/functions_test.h"
void	test_ft_memmove(void)
{
	void	*dest;
	const char	src[] = "patate chaude au four";

	dest = malloc(ft_strlen(src) + 1);
	if (dest == NULL)
	{
		printf("Memory allocation failed\n");
        return;
	}
	printf(BLUE"------------------- TEST FT_MEMMOVE -------------------\n\n"RESET);
	ft_memmove(dest, src, ft_strlen(src));
	printf("%s", (char *)dest);
	printf("\n");
	printf(BLUE"\n------------------------- END --------------------------\n"RESET);
}