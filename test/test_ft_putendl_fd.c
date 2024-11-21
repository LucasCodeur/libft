/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putendl_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 19:43:51 by lud-adam          #+#    #+#             */
/*   Updated: 2024/11/20 19:51:24 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./functions_test.h"

void	test_1_ft_putendl_write_on_stdout_or_stderr(void)
{
	int		fd;
	char	*str = "One piece";

	fd = 1;
	printf(BLUE"------------------- ft_putendl_fd -------------------\n\n"RESET);
	printf(YELLOW"TEST 1 : Write on the stdin :  \n\n"RESET);
	ft_putendl_fd(str, fd);
	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
}

void	test_ft_putendl_fd(void)
{
	test_1_ft_putendl_write_on_stdout_or_stderr();
}

