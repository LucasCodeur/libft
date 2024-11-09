#include "test/functions_test.h"

void	test_ft_memset(void)
{
	char	buffer[10];

 	printf(BLUE"------------------- TEST FT_MEMSET -------------------\n\n"RESET);

	// Test 1 Basic Functionality
	
	printf(YELLOW"BASIC FUNCTIONNALITY TEST\n\n"RESET);
	// 0xAA 10101010
	ft_memset(buffer, 0xAA, 5);
	for (int i = 0; i < 1; i++)
	{
		if (buffer[i] != (char)0xAA)
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
	printf(GREEN"TEST 1 PASSED\n\n"RESET);
	printf(BLUE"------------------------------------------------------------------\n\n"RESET);

	// Test 2 Boundary test with count set to 0
	
	printf("\n");
	printf(YELLOW"BOUNDARY TEST WITH COUNT SET TO 0\n\n"RESET);
	memset(buffer, 0, 10);  // Clear buffer
	ft_memset(buffer, 0xBB, 0);
	for (int i = 0; i < 10; i++) // because before equal to 10
	{
		if (buffer[i] != 0)
		{
			printf(RED"TEST 1 FAILED\n"RESET);
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
	printf(RED"TEST 2 PASSED\n\n"RESET);
	printf(BLUE"------------------------------------------------------------------\n\n"RESET);

	//  Test Full Buffer
	printf(YELLOW"TEST FULL BUFFER\n\n"RESET);
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
	printf(GREEN"Test 3 PASSED\n"RESET);
	printf(BLUE"------------------------------------------------------------------\n\n"RESET);

	// Test 4 Edge Case with value 0x00 and 0xFF

	printf(YELLOW"TEST EDGE CASE WITH VALUE 0X00 AND 0XFF\n"RESET);
	printf(YELLOW"\nTEST A\n\n"RESET);
	memset(buffer, 0xAA, 10);  // Initialize buffer
    ft_memset(buffer, 0x00, 10);
    for (int i = 0; i < 10; i++) 
	{
        if (buffer[i] != (char)0x00) 
		{
            printf(RED"TEST 4A FAILED\n\n"RESET);
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
            printf(RED"TEST 4B FAILED\n"RESET);
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
	printf(GREEN"\n\nTest 4 Passed\n"RESET);
	printf(BLUE"\n------------------------- END --------------------------\n"RESET);
}