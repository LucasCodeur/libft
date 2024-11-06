/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam <marvin@42.fr> >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:12:15 by lud-adam          #+#    #+#             */
/*   Updated: 2024/11/06 15:40:17 by lud-adam         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *pointer, int value, size_t count)
{
	unsigned int i;
	void *p;

	i = 0;
	while (i < count)
	{
		*(unsigned char *)pointer = value;
		i++ sizeof(unsigned char);
	}
	return (pointer);
}