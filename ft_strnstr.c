/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eveil <eveil@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 19:43:39 by lud-adam          #+#    #+#             */
/*   Updated: 2024/11/14 16:24:10 by eveil            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int 	i;
	unsigned int 	j;
	unsigned int	count;
	char 	*find;

	i = 0;
	j = 0;
	count = 0;
	find = NULL;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] && count <= len)
	{
		find = (char *)&big[i];
		while (big[i + j] == little[j] && count <= len)
		{
			if (little[j + 1] == '\0')
				return (find);
			else if (big[i + j] != little[j])
				break;

			j++;
			count++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}