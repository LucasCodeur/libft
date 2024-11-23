/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstmap.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 12:53:10 by lud-adam          #+#    #+#             */
/*   Updated: 2024/11/22 15:03:33 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions_test.h"

void	ft_putstr_void(void *p)
{
	char *str = (char *)p;
	if (str)
	{
		while (*str)
			write(1, str++, 1);
	}
}

void	test_1_ft_lstmap_apply_a_function_and_create_a_new_list(void)
{
	char	*src;
	char	*src1;
	char	*src2;
  t_list  *new_list;

	src = malloc(sizeof(char) * 9);
	src1 = malloc(sizeof(char) * 9);
	src2 = malloc(sizeof(char) * 9);
	if (!src || !src1 || !src2)
		return ;
	strcpy(src, "AU MONDE");
	strcpy(src1, "FDSFAS");
	strcpy(src2, "FDASF");

	t_list	*head = NULL;
	t_list	*node1 = ft_lstnew(src);
	t_list	*node2 = ft_lstnew(src1);
	t_list	*node3 = ft_lstnew(src2);

	ft_lstadd_front(&head, node1);
	ft_lstadd_front(&head, node2);
	ft_lstadd_back(&head, node3);

	// Application de ft_lstiter
	printf("TEST : Apply ft_putstr_void to list nodes:\n");
	printf("\n");
  new_list = ft_lstmap(head, &ft_putstr_void, del);
}

void	test_ft_lstmap()
{
  test_1_ft_lstmap_apply_a_function_and_create_a_new_list();
}

