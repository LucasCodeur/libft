/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam <marvin@42.fr> >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 18:17:01 by lud-adam          #+#    #+#             */
/*   Updated: 2024/11/08 13:50:00 by lud-adam         ###   ########lyon.fr   */
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

void    test_ft_isprint(void)
{
    printf("------------------- TEST FT_ISPRINT -------------------\n");
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
	printf("\n------------------------- END --------------------------\n");
}

void	test_ft_strlen(void)
{
	printf("------------------- TEST FT_STRLEN -------------------\n");
	printf("TEST COUNT SIZE STRING  : \n\n ft_strlen : %zu\n strlen : %zu\n", ft_strlen(TEST_STRING), strlen(TEST_STRING));
	printf("\n------------------------- END --------------------------\n");
}

void    display_binary(unsigned char octet)
{
    for (int i = 7; i >= 0; i--)
        printf("%d", (octet >> i) & 1);
    printf("\n");
}

void	test_ft_memset(void)
{
	char	buffer[10];

 	printf("------------------- TEST FT_MEMSET -------------------\n\n");

	// Test 1 Basic Functionality
	
	printf("BASIC FUNCTIONNALITY TEST\n\n");
	// 0xAA 10101010
	ft_memset(buffer, 0xAA, 5);
	for (int i = 0; i < 1; i++)
	{
		if (buffer[i] != (char)0xAA)
		{
			printf("TEST 1 FAILED\n");
			for (int i = 0 ; i < 5; i++)
				display_binary(buffer[i]);
			for (int i = 0 ; i < 5; i++)
				printf("%d", buffer[i]);
			return;
		}
	}
	for (int i = 0 ; i < 5; i++)
		display_binary(buffer[i]);
	printf("\n");
	for (int i = 0 ; i < 5; i++)
		printf("%d", buffer[i]);
	printf("\n");
	printf("\n");
	printf("TEST 1 PASSED\n\n");

	// Test 2 Boundary test with count set to 0
	printf("------------------------------------------------------------------\n\n");
	printf("\n");
	printf("BOUNDARY TEST WITH COUNT SET TO 0\n\n");
	memset(buffer, 0, 10);  // Clear buffer
	ft_memset(buffer, 0xBB, 0);
	for (int i = 0; i < 10; i++) // because before equal to 10
	{
		if (buffer[i] != 0)
		{
			printf("TEST 1 FAILED\n");
			printf("\n");
			for (int i = 0 ; i < 10; i++)
				display_binary(buffer[i]);
			printf("\n");
			for (int i = 0 ; i < 10; i++)
				printf("%d", buffer[i]);
			return;
		}
	}
	for (int i = 0 ; i < 5; i++)
		display_binary(buffer[i]);
	printf("\n");
	for (int i = 0 ; i < 5; i++)
		printf("%d", buffer[i]);
	printf("\n");
	printf("\n");
	printf("TEST 2 PASSED\n\n");

	//  Test Full Buffer
	printf("------------------------------------------------------------------\n\n");
	printf("TEST FULL BUFFER\n\n");
	ft_memset(buffer, 0xCC, 10);
	for (int i = 0; i < 10; i++)
	{
		if (buffer[i] != (char)0xCC)
		{
			printf("Test 3 FAILED\n");
			for (int i = 0; i < 10; i++)
				display_binary(buffer[i]);
			for (int i = 0 ; i < 10; i++)
				printf("%d", buffer[i]);
			return;
		}
	}
	for (int i = 0 ; i < 10; i++)
		display_binary(buffer[i]);
	printf("\n");
	for (int i = 0 ; i < 10; i++)
		printf("%d", buffer[i]);
	printf("\n");
	printf("\n");
	printf("Test 3 PASSED\n");

	// Test 4 Edge Case with value 0x00 and 0xFF
	
	printf("------------------------------------------------------------------\n\n");
	printf("TEST EDGE CASE WITH VALUE 0X00 AND 0XFF\n");
	printf("\nTEST A\n\n");
	memset(buffer, 0xAA, 10);  // Initialize buffer
    ft_memset(buffer, 0x00, 10);
    for (int i = 0; i < 10; i++) 
	{
        if (buffer[i] != (char)0x00) 
		{
            printf("TEST 4A FAILED\n\n");
			for (int i = 0; i < 10; i++)
				display_binary(buffer[i]);
			printf("\n");
			for (int i = 0 ; i < 10; i++)
				printf("%c", buffer[i]);
            return;
        }
    }
	for (int i = 0; i < 10; i++)
		display_binary(buffer[i]);
	printf("\n");
	for (int i = 0 ; i < 10; i++)
		printf("%d", buffer[i]);
	printf("\n\n");
	ft_memset(buffer, 0xf1, 10);
	for (int i = 0; i < 10; i++) 
	{
        if (buffer[i] != (char)0xff) 
		{
            printf("TEST 4B FAILED\n");
			printf("\n");
			for (int i = 0; i < 10; i++)
				display_binary(buffer[i]);
			printf("\n");
			for (int i = 0 ; i < 10; i++)
				printf("%d", buffer[i]);        
			return;
        }
    }
	for (int i = 0 ; i < 10; i++)
		display_binary(buffer[i]);
	printf("\n");
	for (int i = 0 ; i < 10; i++)
		printf("%d", buffer[i]);
	printf("\n\nTest 4 Passed\n");
	printf("\n------------------------------------------------------------------\n");
	printf("\n------------------------- END --------------------------\n");
}

void	test_ft_bzero(void)
{
	char	buffer[10];

 	printf("------------------- TEST FT_BZERO -------------------\n\n");

	// Test 1 Basic Functionality
	
	printf("BASIC FUNCTIONNALITY TEST\n\n");
///////////////////////////////////////////
	ft_memset(buffer, 0xAA, 5);
	for (int i = 0 ; i < 5; i++)
		display_binary(buffer[i]);
	printf("\n");
	for (int i = 0 ; i < 5; i++)
		printf("%d", buffer[i]);
	printf("\n");
	printf("\n");
///////////////////////////////////////////
	ft_bzero(buffer, 5);
	for (int i = 0; i < 1; i++)
	{
		if (buffer[i] != (char)0)
		{
			printf("TEST 1 FAILED\n");
			for (int i = 0 ; i < 5; i++)
				display_binary(buffer[i]);
			for (int i = 0 ; i < 5; i++)
				printf("%d", buffer[i]);
			return;
		}
	}
	for (int i = 0 ; i < 5; i++)
		display_binary(buffer[i]);
	printf("\n");
	for (int i = 0 ; i < 5; i++)
		printf("%d", buffer[i]);
	printf("\n");
	printf("\n");
	printf("TEST 1 PASSED\n\n");

	// Test 2 Count set to 0
	printf("------------------------------------------------------------------\n\n");
	printf("\n");
	printf("BOUNDARY TEST WITH COUNT SET TO 0\n\n");
	///////////////////////////////////////////
	ft_memset(buffer, 1, 5);
	for (int i = 0 ; i < 5; i++)
		display_binary(buffer[i]);
	printf("\n");
	for (int i = 0 ; i < 5; i++)
		printf("%d", buffer[i]);
	printf("\n");
	printf("\n");
	///////////////////////////////////////////
	ft_bzero(buffer, 0);
	for (int i = 0; i < 5; i++)
	{
		if (buffer[i] != 1)
		{
			printf("TEST FAILED\n");
			printf("\n");
			for (int i = 0 ; i < 5; i++)
				display_binary(buffer[i]);
			printf("\n");
			for (int i = 0 ; i < 5; i++)
				printf("%d", buffer[i]);
			return;
		}
	}
	for (int i = 0 ; i < 5; i++)
		display_binary(buffer[i]);
	printf("\n");
	for (int i = 0 ; i < 5; i++)
		printf("%d", buffer[i]);
	printf("\n");
	printf("\n");
	printf("TEST 2 PASSED\n\n");

	//  Test Full Buffer
	printf("------------------------------------------------------------------\n\n");
	printf("TEST FULL BUFFER\n\n");
	///////////////////////////////////////////
	ft_memset(buffer, 0xAA, 10);
	for (int i = 0 ; i < 5; i++)
		display_binary(buffer[i]);
	printf("\n");
	for (int i = 0 ; i < 5; i++)
		printf("%d", buffer[i]);
	printf("\n");
	printf("\n");
	///////////////////////////////////////////
	ft_bzero(buffer, 10);
	for (int i = 0; i < 10; i++)
	{
		if (buffer[i] != (char)0)
		{
			printf("Test 3 FAILED\n");
			for (int i = 0; i < 10; i++)
				display_binary(buffer[i]);
			for (int i = 0 ; i < 10; i++)
				printf("%d", buffer[i]);
			return;
		}
	}
	for (int i = 0 ; i < 10; i++)
		display_binary(buffer[i]);
	printf("\n");
	for (int i = 0 ; i < 10; i++)
		printf("%d", buffer[i]);
	printf("\n");
	printf("\n");
	printf("Test 3 PASSED\n");
	printf("\n------------------------- END --------------------------\n");
}

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
	printf("------------------- TEST FT_MEMCPY -------------------\n\n");
	ft_memcpy(dest, src, ft_strlen(src));
	printf("%s", (char *)dest);
	printf("\n");
	printf("\n------------------------- END --------------------------\n");
}

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
	printf("------------------- TEST FT_MEMMOVE -------------------\n\n");
	ft_memmove(dest, src, ft_strlen(src));
	printf("%s", (char *)dest);
	printf("\n");
	printf("\n------------------------- END --------------------------\n");
}