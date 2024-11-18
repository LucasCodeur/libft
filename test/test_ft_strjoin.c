/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strjoin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 19:11:28 by lud-adam          #+#    #+#             */
/*   Updated: 2024/11/18 19:34:23 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions_test.h"

void	test_1_ft_strjoin_2_string(void)
{
	const char	*s1 = "One piece"; 
	const char	*s2 = " est le meilleur manga"; 
	char	*final_array = ft_strjoin(s1, s2);

	printf(BLUE"----------------- ft_strjoin -----------------\n"RESET);
	printf(YELLOW"TEST 1 : Join 2 strings \n\n"RESET);
	printf("%s\n\n", s1);
	printf("%s\n\n", s2);
	printf("%s", final_array);
	printf(BLUE"\n----------------- end ----------------\n\n"RESET);
}

void	test_ft_strjoin(void)
{
	test_1_ft_strjoin_2_string();
}
