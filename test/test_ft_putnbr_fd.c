/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putnbr_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 19:52:32 by lud-adam          #+#    #+#             */
/*   Updated: 2024/11/20 19:53:53 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./functions_test.h"

void	test_1_ft_putnbr_write_on_stdout_or_stderr(void)
{
	int		fd;
	int	 nb = 42;

	fd = 1;
	printf(BLUE"------------------- ft_putnbr -------------------\n\n"RESET);
	printf(YELLOW"TEST 1 : Write on the stdin :  \n\n"RESET);
	ft_putnbr_fd(nb, fd);
	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
}

void	test_ft_putnbr_fd(void)
{
	test_1_ft_putnbr_write_on_stdout_or_stderr();
}
