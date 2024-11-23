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

void *to_upper(void *content)
{
    char *str; 
    char *new_str;

    str = (char *)content;
    new_str = strdup(str);
    for (int i = 0; new_str[i]; i++)
        new_str[i] = ft_toupper(new_str[i]);
    return (new_str);
}

void del(void *content)
{
    free(content);
}

void	test_1_ft_lstmap_apply_a_function_and_create_a_new_list(void)
{
	char	*src;
	char	*src1;
	char	*src2;
  t_list  *new_list;
  t_list  *current;

	src = malloc(sizeof(char) * 9);
	src1 = malloc(sizeof(char) * 9);
	src2 = malloc(sizeof(char) * 9);
	if (!src || !src1 || !src2)
		return ;
	strcpy(src, "fadss");
	strcpy(src1, "erewqr");
	strcpy(src2, "hgghf");
	t_list	*head;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
  head = NULL;
  node1 = ft_lstnew(src);
  node2 = ft_lstnew(src1);
  node3 = ft_lstnew(src2);
	ft_lstadd_back(&head, node1);
	ft_lstadd_back(&head, node2);
	ft_lstadd_back(&head, node3);
  new_list = ft_lstmap(head, to_upper, del);
  current = new_list;
  printf(BLUE"------------------- ft_lstmap -------------------\n\n"RESET);
	printf(YELLOW"TEST 1 : Apply to upper on the all nodes and create and new list :  \n\n"RESET);
  while (current)
  {
    printf("%s\n", (char *)head->content);
    printf("%s\n\n", (char *)current->content);
    current = current->next;
    head = head->next;
  }
  ft_lstclear(&new_list, del);
  ft_lstclear(&head, del);
	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
}

void	test_ft_lstmap()
{
  test_1_ft_lstmap_apply_a_function_and_create_a_new_list();
}

