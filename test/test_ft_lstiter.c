/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstiter.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 12:53:10 by lud-adam          #+#    #+#             */
/*   Updated: 2024/11/21 13:38:19 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions_test.h"

int     ft_is_upperrr(int c)
{
    if (c >= 65 && c <= 90)
        return (1);
    return (0);
}

void	ft_putstr(char *p)
{
	unsigned int	i;

	i = 0;
	while (p[i])
	{
		write(1, &p[i], 1);
		i++;
	}
}

void	test_1_ft_lstiter_apply_tolower(void)
{
	char	*src;
	char	*src1;
	char	*src2;
	// char	(*f)(void*);


	src = malloc(sizeof(char) * 9);
	if (!src)
		return ;
	src1 = malloc(sizeof(char) * 9);
	if (!src1)
		return ;
	src2 = malloc(sizeof(char) * 9);
	if (!src2)
		return ;
	strcpy(src, "AU MONDE");
	strcpy(src1, "FDSFAS");
	strcpy(src2, "FDASF");
	t_list	*head = NULL; // Begin of the list
			
	t_list	*node1 = ft_lstnew(src);
	t_list	*node2 = ft_lstnew(src1);
	t_list	*node3 = ft_lstnew(src2);

	ft_lstadd_front(&head, node1);
	ft_lstadd_front(&head, node2);
	
	ft_lstadd_back(&head, node3);
	t_list *current = head;
	printf(BLUE"------------------- ft_lstiter -------------------\n\n"RESET);
	printf(YELLOW"TEST 1 : apply upper :  \n\n"RESET);
	// while (current)
	// {
		// printf("%s ", (char *)current->content);
	// 	current = current->next;
	// }
	ft_lstiter(node1, &ft_putstr);
	printf("\n");
	while (current)
	{
		printf("%s ", (char *)current->content);
		current = current->next;
	}
	printf(BLUE"\n--------------------- end ---------------------\n\n"RESET);
}

void	test_ft_lstiter(void)
{
	test_1_ft_lstiter_apply_tolower();
}
