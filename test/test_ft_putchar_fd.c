/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putchar_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 19:38:51 by lud-adam          #+#    #+#             */
/*   Updated: 2024/11/18 20:00:20 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions_test.h"

void	test_1_write_on_stdin(void)
{
	char	c;
	int		fd;

	c = 'k';
	fd = 0;
	printf(BLUE"------------------- ft_putchar_fd -------------------\n\n"RESET);
	printf(YELLOW"TEST 1 : Write on the stdin :  \n\n"RESET);
	ft_putchar_fd(fd, c);
	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
}

void	test_ft_putchar_fd(void)
{
	test_1_write_on_stdin();
}
