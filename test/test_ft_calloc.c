/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_calloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 14:03:22 by lud-adam          #+#    #+#             */
/*   Updated: 2024/11/17 15:24:18 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions_test.h"

void	test_1_calloc_allocate_memory(void)
{
  size_t  nmemb;
  size_t  size;
  int  *pointer;

  nmemb = 5;
  size = sizeof(int);
	pointer = calloc(nmemb, size);
	printf(BLUE"----------------- calloc -----------------\n"RESET);
	printf(YELLOW"TEST 1 : Allocate memory  \n\n"RESET);
  for (size_t i = 0; i < nmemb; i++)
    pointer[i] = i;
  for (size_t i = 0; i < nmemb; i++)
    printf(MAGENTA"%d", pointer[i]);
  free(pointer);
	printf(BLUE"\n----------------- end ----------------\n\n"RESET);
}

void	test_1_ft_calloc_allocate_memory(void)
{
  size_t  nmemb;
  size_t  size;
  int  *pointer;

  nmemb = 5;
  size = sizeof(int);
	pointer = ft_calloc(nmemb, size);
	printf(BLUE"----------------- ft_calloc -----------------\n"RESET);
	printf(YELLOW"TEST 1 : Allocate memory  \n\n"RESET);
  for (size_t i = 0; i < nmemb; i++)
    pointer[i] = i;
  for (size_t i = 0; i < nmemb; i++)
    printf(MAGENTA"%d", pointer[i]);
  free(pointer);
	printf(BLUE"\n----------------- end ----------------\n\n"RESET);
}

void  test_1_allocate_memory(void)
{
  test_1_calloc_allocate_memory();
  test_1_ft_calloc_allocate_memory();
}

void	test_2_calloc_check_if_only_0(void)
{
  size_t  nmemb;
  size_t  size;
  int  *pointer;

  nmemb = 5;
  size = sizeof(int);
	pointer = calloc(nmemb, size);
	printf(BLUE"----------------- calloc -----------------\n"RESET);
	printf(YELLOW"TEST 1 : Check if only 0  \n\n"RESET);
  for (size_t i = 0; i < nmemb; i++)
    printf(MAGENTA"%d", pointer[i]);
  free(pointer);
	printf(BLUE"\n----------------- end ----------------\n\n"RESET);
}

void	test_2_ft_calloc_check_if_only_0(void)
{
  size_t  nmemb;
  size_t  size;
  int  *pointer;

  nmemb = 5;
  size = sizeof(int);
	pointer = ft_calloc(nmemb, size);
	printf(BLUE"----------------- ft_calloc -----------------\n"RESET);
	printf(YELLOW"TEST 1 : Check if only 0  \n\n"RESET);
  for (size_t i = 0; i < nmemb; i++)
    printf(MAGENTA"%d", pointer[i]);
  free(pointer);
	printf(BLUE"\n----------------- end ----------------\n\n"RESET);
}

void  test_2_check_if_only_0(void)
{
  test_2_calloc_check_if_only_0();
  test_2_ft_calloc_check_if_only_0();
}

void	test_3_calloc_if_size_and_nmemb_is_equal_to_0(void)
{
  size_t  nmemb;
  size_t  size;
  int  *pointer;

  nmemb = 0;
  size = 0;
	pointer = calloc(nmemb, size);
	printf(BLUE"----------------- calloc -----------------\n"RESET);
	printf(YELLOW"TEST 3 : If size and nmemb is equal to 0  \n\n"RESET);
  for (size_t i = 0; i < nmemb; i++)
    printf(MAGENTA"%d", pointer[i]);
  free(pointer);
	printf(BLUE"\n----------------- end ----------------\n\n"RESET);
}

void	test_3_ft_calloc_if_size_and_nmemb_is_equal_to_0(void)
{
  size_t  nmemb;
  size_t  size;
  int  *pointer;

  nmemb = 0;
  size = 0;
	pointer = ft_calloc(nmemb, size);
	printf(BLUE"----------------- ft_calloc -----------------\n"RESET);
	printf(YELLOW"TEST 3 : If size and nmemb is equal to 0 \n\n"RESET);
  for (size_t i = 0; i < nmemb; i++)
    printf(MAGENTA"%d", pointer[i]);
  free(pointer);
	printf(BLUE"\n----------------- end ----------------\n\n"RESET);
}

void  test_3_if_size_and_nmemb_is_equal_to_0(void)
{
  test_3_calloc_if_size_and_nmemb_is_equal_to_0();
  test_3_ft_calloc_if_size_and_nmemb_is_equal_to_0();
}

void	test_4_calloc_if_size_is_equal_to_0(void)
{
  size_t  nmemb;
  size_t  size;
  int  *pointer;

  nmemb = 3;
  size = 0;
	pointer = calloc(nmemb, size);
	printf(BLUE"----------------- calloc -----------------\n"RESET);
	printf(YELLOW"TEST 4 : If size is equal to 0  \n\n"RESET);
  for (size_t i = 0; i < nmemb; i++)
    printf(MAGENTA"%d", pointer[i]);
  free(pointer);
	printf(BLUE"\n----------------- end ----------------\n\n"RESET);
}

void	test_4_ft_calloc_if_size_is_equal_to_0(void)
{
  size_t  nmemb;
  size_t  size;
  int  *pointer;

  nmemb = 3;
  size = 0;
	pointer = ft_calloc(nmemb, size);
	printf(BLUE"----------------- ft_calloc -----------------\n"RESET);
	printf(YELLOW"TEST 4 : If size is equal to 0 \n\n"RESET);
  for (size_t i = 0; i < nmemb; i++)
    printf(MAGENTA"%d", pointer[i]);
  free(pointer);
	printf(BLUE"\n----------------- end ----------------\n\n"RESET);
}

void  test_4_if_size_is_equal_to_0(void)
{
  test_4_calloc_if_size_is_equal_to_0();
  test_4_ft_calloc_if_size_is_equal_to_0();
}


void  test_ft_calloc(void)
{
    // test_1_allocate_memory();
    // test_2_check_if_only_0();
    // test_3_if_size_and_nmemb_is_equal_to_0();
     test_4_if_size_is_equal_to_0();
}
