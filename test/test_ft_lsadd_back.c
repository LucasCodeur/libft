/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lsadd_back.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 02:00:37 by lud-adam          #+#    #+#             */
/*   Updated: 2024/11/21 02:38:03 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./functions_test.h"

void	test_1_ft_lstadd_back_add_new_node_at_the_end()
{
	int	nb;

	nb = 0;

	t_list	*head = NULL; // Begin of the list
												//
	t_list	*node1 = ft_lstnew("est le meilleur manga");
	t_list	*node2 = ft_lstnew("One piece");
	t_list	*node3 = ft_lstnew("au monde");

	ft_lstadd_front(&head, node1);
	ft_lstadd_front(&head, node2);
	t_list *current = head;
	
	nb = ft_lstsize(current);
	ft_lstadd_back(&head, node3);
	printf(BLUE"------------------- ft_lstaddback -------------------\n\n"RESET);
	printf(YELLOW"TEST 1 : add a new node at the end of the list :  \n\n"RESET);
	while (current)
	{
		printf("%s ", (char *)current->content);
		current = current->next;
	}
	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
}

void	test_ft_lstadd_back(void)
{
	test_1_ft_lstadd_back_add_new_node_at_the_end();
}
