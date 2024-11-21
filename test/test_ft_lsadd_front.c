/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lsadd_front.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 23:13:50 by lud-adam          #+#    #+#             */
/*   Updated: 2024/11/21 00:40:54 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./functions_test.h"

void	test_1_ft_lstadd_front_put_content_inside_a_struct()
{
	t_list	*head = NULL; // Begin of the list
	t_list	*node1 = ft_lstnew("est le meilleur manga");
	t_list	*node2 = ft_lstnew("One piece");
	ft_lstadd_front(&head, node1);
	ft_lstadd_front(&head, node2);
	t_list *current = head;
	printf(BLUE"------------------- ft_lstadd_front -------------------\n\n"RESET);
	printf(YELLOW"TEST 1 : Put new node at the beginning of the list :  \n\n"RESET);
	while (current)
	{
		printf("%s ", (char *)current->content);
		current = current->next;
	}
	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
}

void	test_ft_lstadd_front(void)
{
	test_1_ft_lstadd_front_put_content_inside_a_struct();
}
