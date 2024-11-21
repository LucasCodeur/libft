/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstlast.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 01:33:41 by lud-adam          #+#    #+#             */
/*   Updated: 2024/11/21 01:58:18 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./functions_test.h"

void	test_1_ft_lstlast_return_the_last_nodes()
{
	int	nb;

	nb = 0;

	t_list	*head = NULL; // Begin of the list
												//
	t_list	*node1 = ft_lstnew("est le meilleur manga");
	t_list	*node2 = ft_lstnew("One piece");
	t_list	*last_node;

	ft_lstadd_front(&head, node1);
	ft_lstadd_front(&head, node2);

	t_list *current = head;
	
	nb = ft_lstsize(current);
	last_node = ft_lstlast(current);
	printf(BLUE"------------------- ft_lstlast -------------------\n\n"RESET);
	printf(YELLOW"TEST 1 : Returns the last nodes of the list :  \n\n"RESET);
	while (current)
	{
		printf("%s ", (char *)current->content);
		current = current->next;
	}
	printf("%d\n\n", nb);
	printf("%s", (char *)last_node->content);
	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
}

void	test_ft_lstlast(void)
{
	test_1_ft_lstlast_return_the_last_nodes();
}

