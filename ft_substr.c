/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 16:30:18 by lud-adam          #+#    #+#             */
/*   Updated: 2024/11/18 13:53:57 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s, size_t len)
{
	char	*dest;
	size_t  size;
	size_t  i;

	size = ft_strlen(s) + 1;
	i = 0;
	dest = malloc(size * sizeof(char));
	if (!dest)
		return (NULL);
	while (s[i] && i < len)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char  *dest;

	if (start > (unsigned int)ft_strlen(s))
	{
			dest = malloc(0);
			return (dest);
	}
	dest = ft_strndup(&s[start], len);
	return (dest);
}
