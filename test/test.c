/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam <marvin@42.fr> >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 18:17:01 by lud-adam          #+#    #+#             */
/*   Updated: 2024/11/06 13:44:23 by lud-adam         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		test_ft_isalpha(void)
{
	printf("------------------- TEST FT_ISALPHA -------------------\n");
	printf("\n");
	printf("TEST ALPHA_MINUS : \n\n ft_isalpha : %d\n isalpha : %d\n", ft_isalpha(TEST_ALPHA_MINUS), isalpha(TEST_ALPHA_MINUS));
	printf("\n");
	printf("TEST ALPHA_CAPITAL : \n\n ft_isalpha : %d\n isalpha : %d\n", ft_isalpha(TEST_ALPHA_CAPITAL), isalpha(TEST_ALPHA_CAPITAL));
	printf("\n");
	printf("TEST WRONG CHARACTER : \n\n ft_isalpha : %d\n isalpha : %d\n", ft_isalpha(TEST_WRONG_CHARACTER), isalpha(TEST_WRONG_CHARACTER));
	printf("\n------------------------- END --------------------------\n");
}

void		test_ft_isdigit(void)
{
	printf("------------------- TEST FT_ISDIGIT -------------------\n");
	printf("\n");
	printf("TEST DIGIT : \n\n ft_isdigit : %d\n isdigit : %d\n", ft_isdigit(TEST_DIGIT), isdigit(TEST_DIGIT));
	printf("\n");
	printf("TEST WRONG CHARACTER : \n\n ft_isdigit : %d\n isdigit : %d\n", ft_isdigit(TEST_WRONG_CHARACTER), isdigit(TEST_WRONG_CHARACTER));
	printf("\n------------------------- END --------------------------\n");
}

void    test_ft_isalnum(void)
{
	printf("------------------- TEST FT_ISALNUM -------------------\n");
	printf("\n");
	printf("TEST ALPHA_MINUS : \n\n ft_isalnum : %d\n isalnum : %d\n", ft_isalnum(TEST_ALPHA_MINUS), isalnum(TEST_ALPHA_MINUS));
	printf("\n");
	printf("TEST ALPHA_CAPITAL : \n\n ft_isalnum : %d\n isalnum : %d\n", ft_isalnum(TEST_ALPHA_CAPITAL), isalnum(TEST_ALPHA_CAPITAL));
	printf("\n");
	printf("TEST DIGIT : \n\n ft_isalnum : %d\n isalnum : %d\n", ft_isalnum(TEST_DIGIT), isalnum(TEST_DIGIT));
	printf("\n");
	printf("TEST WRONG CHARACTER : \n\n ft_isalnum : %d\n isalnum : %d\n", ft_isalnum(TEST_WRONG_CHARACTER), isalnum(TEST_WRONG_CHARACTER));
	printf("\n------------------------- END --------------------------\n");
}

void    test_ft_isascii(void)
{
    printf("------------------- TEST FT_ISASCII -------------------\n");
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
	printf("\n------------------------- END --------------------------\n");
}

void	test_ft_strlen(void)
{
	printf("------------------- TEST FT_STRLEN -------------------\n");
	printf("TEST COUNT SIZE STRING  : \n\n ft_strlen : %zu\n strlen : %zu\n", ft_strlen(TEST_STRING), strlen(TEST_STRING));
	printf("\n------------------------- END --------------------------\n");
}

void	test_ft_memset(void)
{
	int	array[] = {1, 2, 3, 4, 5};
	int		i;
	int		j;
	
	i = 0;
	j = 1;
	printf("------------------- TEST FT_MEMSET -------------------\n");
	printf("MEMSET : ");
	printf("\n\n");
	while (i < 5)
	{
		printf("%d", array[i]);
		i++;
	}
	printf("\n");
	printf("\n");
	i = 0;
	memset(array, 'A', sizeof(array));
	while (i < 5)
	{
		printf("%d", array[i]);
		i++;
	}
	printf("\n\n");
	printf("FT_MEMSET : ");
	printf("\n\n");
	i = 0;
	while (i < 5)
	{
		array[i] = j;
		printf("%d", array[i]);
		i++;
		j++;
	}
	printf("\n");
	i = 0;
	ft_memset(array, 0, sizeof(array));
	while (i < 5)
	{
		printf("%d", array[i]);
		i++;
	}
	printf("\n------------------------- END --------------------------\n");
}

void	test_ft_bzero(void)
{
	int	array[] = {1, 2, 3, 4, 5};
	int		i;
	int		j;
	
	i = 0;
	j = 1;
	printf("------------------- TEST FT_BZERO -------------------\n");
	printf("BZERO : ");
	printf("\n\n");
	while (i < 5)
	{
		printf("%d", array[i]);
		i++;
	}
	printf("\n");
	i = 0;
	memset(array, 0, sizeof(array));
	while (i < 5)
	{
		printf("%d", array[i]);
		i++;
	}
	printf("\n\n");
	printf("FT_BZERO : ");
	printf("\n\n");
	i = 0;
	while (i < 5)
	{
		array[i] = j;
		printf("%d", array[i]);
		i++;
		j++;
	}
	printf("\n");
	i = 0;
	ft_memset(array, 0, sizeof(array));
	while (i < 5)
	{
		printf("%d", array[i]);
		i++;
	}
	printf("\n------------------------- END --------------------------\n");
}