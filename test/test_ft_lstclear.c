/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstclear.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 09:30:25 by lud-adam          #+#    #+#             */
/*   Updated: 2024/11/21 10:14:21 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	free_content(void *content)
{
	free(content);
}

void	test_1_ft_lstclear_delete_a_node()
{
	char	*src;

	src = malloc(sizeof(char) * 9);
	if (!src)
		return ;
	strcpy(src, "au monde");
	t_list	*head = NULL; // Begin of the list
			
	t_list	*node1 = ft_lstnew("est le meilleur manga");
	t_list	*node2 = ft_lstnew("One piece");
	t_list	*node3 = ft_lstnew(src);

	ft_lstadd_front(&head, node1);
	ft_lstadd_front(&head, node2);
	
	ft_lstadd_back(&head, node3);
	t_list *current = head;
	printf(BLUE"------------------- ft_lstclear -------------------\n\n"RESET);
	printf(YELLOW"TEST 1 : free all :  \n\n"RESET);
	while (current)
	{
		printf("%s ", (char *)current->content);
		current = current->next;
	}
	ft_lstclear(current, &free_content);
	current = head;
	printf("\n");
	while (current)
	{
		printf("%s ", (char *)current->content);
		current = current->next;
	}
	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
}

void	test_ft_lstclear(void)
{
	test_1_ft_lstdelone_delete_a_node();
}
