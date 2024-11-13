/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam <marvin@42.fr> >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 19:43:39 by lud-adam          #+#    #+#             */
/*   Updated: 2024/11/13 19:56:37 by lud-adam         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *big, const char *little, size_t len)
{
	unsigned int 	i;
	unsigned int 	j;
	char 	*find;

	i = 0;
	j = 0;
	find = NULL;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] && i <= len)
	{
		find = (char *)big;
		while (big[i + j] == little[i + j] && i + j <= len)
		{
			if (big[i + j] != little[i + j])
				break;
			else if (big[i + j] == '\0')
				return (find);
			j++;
		}
		i++;
	}
	return (NULL);
}