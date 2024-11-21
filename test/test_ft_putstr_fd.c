/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putstr_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 19:21:13 by lud-adam          #+#    #+#             */
/*   Updated: 2024/11/20 19:24:58 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./functions_test.h"

void	test_1_ft_putstr_write_on_stdout_or_stderr(void)
{
	int		fd;
	char	*str = "One piece";

	fd = 1;
	printf(BLUE"------------------- ft_putchar_fd -------------------\n\n"RESET);
	printf(YELLOW"TEST 1 : Write on the stdin :  \n\n"RESET);
	ft_putstr_fd(str, fd);
	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
}

void	test_ft_putstr_fd(void)
{
	test_1_ft_putstr_write_on_stdout_or_stderr();
}

