/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstsize.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 01:23:02 by lud-adam          #+#    #+#             */
/*   Updated: 2024/11/21 01:28:29 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./functions_test.h"

void	test_1_ft_lstsize_count_nodes()
{
	int	nb;

	nb = 0;

	t_list	*head = NULL; // Begin of the list
												//
	t_list	*node1 = ft_lstnew("est le meilleur manga");
	t_list	*node2 = ft_lstnew("One piece");

	ft_lstadd_front(&head, node1);
	ft_lstadd_front(&head, node2);

	t_list *current = head;
	
	nb = ft_lstsize(current);
	printf(BLUE"------------------- ft_lstadd_front -------------------\n\n"RESET);
	printf(YELLOW"TEST 1 : Put new node at the beginning of the list :  \n\n"RESET);
	while (current)
	{
		printf("%s ", (char *)current->content);
		current = current->next;
	}
	printf("%d", nb);
	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
}

void	test_ft_lstsize(void)
{
	test_1_ft_lstsize_count_nodes();
}
