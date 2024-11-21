/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstclear.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 09:30:25 by lud-adam          #+#    #+#             */
/*   Updated: 2024/11/21 12:50:45 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions_test.h"

void	ft_free_content(void *content)
{
	free(content);
}

void	test_1_ft_lstdelone_deletes_multiply_node(void)
{
	char	*src;
	char	*src1;
	char	*src2;

	src = malloc(sizeof(char) * 9);
	if (!src)
		return ;
	src1 = malloc(sizeof(char) * 9);
	if (!src1)
		return ;
	src2 = malloc(sizeof(char) * 9);
	if (!src2)
		return ;
	strcpy(src, "au monde");
	strcpy(src1, "fdsfdsef");
	strcpy(src2, "fdsakfed");
	t_list	*head = NULL; // Begin of the list
			
	t_list	*node1 = ft_lstnew(src);
	t_list	*node2 = ft_lstnew(src1);
	t_list	*node3 = ft_lstnew(src2);

	ft_lstadd_front(&head, node1);
	ft_lstadd_front(&head, node2);
	
	ft_lstadd_back(&head, node3);
	t_list *current = head;
	printf(BLUE"------------------- ft_lstclear -------------------\n\n"RESET);
	printf(YELLOW"TEST 1 : free all :  \n\n"RESET);
	// while (current)
	// {
		// printf("%s ", (char *)current->content);
	// 	current = current->next;
	// }
	ft_lstclear(&current, &ft_free_content);
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
	test_1_ft_lstdelone_deletes_multiply_node();
}
