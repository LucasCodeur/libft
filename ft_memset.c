/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam <marvin@42.fr> >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:12:15 by lud-adam          #+#    #+#             */
/*   Updated: 2024/11/07 10:45:37 by lud-adam         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *pointer, int value, size_t count)
{
	unsigned int i;
	void *p;

	i = 0;
	p = NULL;
	while (i < count)
	{
		*(unsigned char *)pointer = value;
		pointer += sizeof(*pointer);
		i += sizeof(*pointer);
	}
	return (p);
}

void	*ft_memset(void *pointer, int value, size_t count)
{
	unsigned int i;
	unsigned char *p;

	i = 0;
	p = (unsigned char *)pointer;
	while (i < count)
	{
		p[i] = value;
		i++;
	}
	return (pointer);
}

void	*ft_memset(void *pointer, int value, size_t count)
{
	unsigned int i;
	unsigned char *p;

	i = 0;
	p = (unsigned char *)pointer;
	while (i < count)
	{
		*p = value;		
	}
	return (pointer);
}