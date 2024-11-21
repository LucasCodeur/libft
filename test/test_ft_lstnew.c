/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstnew.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:19:34 by lud-adam          #+#    #+#             */
/*   Updated: 2024/11/20 21:23:27 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./functions_test.h"

void	test_1_put_content_inside_a_struct(void)
{
	void	*content;
	char	*str = "One piece";
	t_list *list;

	content = &str;
	list = ft_lstnew(content);
	printf(BLUE"------------------- ft_lstnew -------------------\n\n"RESET);
	printf(YELLOW"TEST 1 : Put content inside a struct :  \n\n"RESET);
	printf("%s", *(char **)list->content);
	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
}

void	test_ft_lstnew(void)
{
	test_1_put_content_inside_a_struct();
}
