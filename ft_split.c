/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 18:01:58 by lud-adam          #+#    #+#             */
/*   Updated: 2024/11/19 20:59:05 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 
#include <stdio.h>

static size_t	count_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s != '\0')
	{
		if (*s != c && (*(s + 1) == c || *(s + 1) == '\0'))
			count++;
		s++;
	}
	return (count);
}

static size_t	str_size(char const *s, char c, size_t *i)
{
	size_t	count;

	count = 0;
	while (s[*i] && (s[*i] != c || s[*i] != '\0'))
	{
		count++;
		(*i)++;
	}
	return (count);
}

void ft_free(char **strs, size_t j)
{
	size_t	i;

	i = 0;
	while (i < j + 1)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
}

static char	*ft_strndup(const char *s, size_t len)
{
	char	*dest;
	size_t	i;

	i = 0;
	dest = ft_calloc(len + 1, sizeof(char));
	if (!dest)
		return (dest);
	while (s[i] && i < len)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(const char *s, char c)
{
	char	**final_array;
	size_t	size;
	size_t	i;
	size_t	j;
	size_t	k;

	size = count_words(s, c);
	i = 0;
	j = 0;
	k = 0;
	final_array = ft_calloc(size + 1, sizeof(char *));
	if (!final_array)
		return (final_array);
	while (j++ < size)
	{		
		k = str_size(&s[i], c, &i);
		*final_array++ = ft_strndup(&s[i - k], k - 1);
		if (!*final_array)
		{
			ft_free(final_array, j);
			return (NULL);
		}
		while (s[i] == c && s[i] != '\0')
			i++;
	}
	*final_array = 0;
	return (final_array);
}
