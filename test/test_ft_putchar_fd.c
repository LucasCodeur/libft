/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putchar_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 19:38:51 by lud-adam          #+#    #+#             */
/*   Updated: 2024/11/19 11:13:36 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./functions_test.h"

void	test_1_write_on_stdout_or_stderr(void)
{
	int		fd;
	char	c;

	c = 'k';
	fd = 2;
	printf(BLUE"------------------- ft_putchar_fd -------------------\n\n"RESET);
	printf(YELLOW"TEST 1 : Write on the stdin :  \n\n"RESET);
	ft_putchar_fd(c, fd);
	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
}

void	test_ft_putchar_fd(void)
{
	test_1_write_on_stdout_or_stderr();
}
