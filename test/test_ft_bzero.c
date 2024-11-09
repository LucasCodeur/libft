#include "libft.h"
#include "functions_test.h"

void	test_ft_bzero(void)
{
	char	buffer[10];

 	printf(BLUE"\n------------------- TEST FT_BZERO -------------------\n\n"RESET);

	// Test 1 Basic Functionality
	
	printf(YELLOW"BASIC FUNCTIONNALITY TEST\n\n"RESET);
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
			printf(RED"TEST 1 FAILED\n"RESET);
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
	printf(GREEN"TEST 1 PASSED\n"RESET);

	// Test 2 Count set to 0
	printf(BLUE"\n------------------------------------------------------------------\n"RESET);
	printf(YELLOW"\nBOUNDARY TEST WITH COUNT SET TO 0\n\n"RESET);
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
			printf(RED"TEST FAILED\n"RESET);
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
	printf(GREEN"TEST 2 PASSED\n\n"RESET);

	//  Test Full Buffer
	printf(BLUE"------------------------------------------------------------------\n\n"RESET);
	printf(YELLOW"TEST FULL BUFFER\n\n"RESET);
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
			printf(RED"Test 3 FAILED\n"RESET);
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
	printf(GREEN"Test 3 PASSED\n"RESET);
	printf(BLUE"\n------------------------- END --------------------------\n"RESET);
}