/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstdelone.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 03:54:35 by lud-adam          #+#    #+#             */
/*   Updated: 2024/11/21 09:47:48 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions_test.h"

void	free_content(void *content)
{
	free(content);
	content = NULL;
}

void	test_1_ft_lstdelone_delete_a_node()
{
	char	*src;

	src = malloc(sizeof(char) * 9);
	if (!src)
		return ;
	strcpy(src, "au monde");
	t_list	*head = NULL; // Begin of the list
			
	t_list	*node3 = ft_lstnew(src);

	ft_lstadd_back(&head, node3);
	printf(BLUE"------------------- ft_lstdelone -------------------\n\n"RESET);
		printf("%s\n", (char *)node3->content);
	ft_lstdelone(node3, &free_content);
		printf("%s ", (char *)node3->content);
	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
}

void	test_ft_lstdelone(void)
{
	test_1_ft_lstdelone_delete_a_node();
}
