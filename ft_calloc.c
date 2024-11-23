/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 14:41:33 by lud-adam          #+#    #+#             */
/*   Updated: 2024/11/18 17:40:00 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elements, size_t size)
{
	void	*memory_block;

	if (elements == 0 || size == 0)
		return (malloc(0));
	memory_block = malloc(elements * size);
	if (!memory_block)
		return (NULL);
	ft_bzero(memory_block, elements * size);
	return (memory_block);
}
