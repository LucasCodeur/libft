#include "test/functions_test.h"

void	test_ft_memcpy(void)
{
	void	*dest;
	const char	src[] = "patate chaude au four";

	dest = malloc(ft_strlen(src) + 1);
	if (dest == NULL)
	{
		printf("Memory allocation failed\n");
        return;
	}
	printf(BLUE"\n------------------- TEST FT_MEMCPY -------------------\n\n"RESET);
	ft_memcpy(dest, src, ft_strlen(src));
	printf("%s", (char *)dest);
	printf("\n");
	printf(BLUE"\n------------------------ END -------------------------\n"RESET);	
}