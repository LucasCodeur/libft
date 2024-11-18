/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 14:41:33 by lud-adam          #+#    #+#             */
/*   Updated: 2024/11/18 11:26:45 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
  void  *memory_block;

  if (nmemb == 0 || size == 0)
  {
    memory_block = malloc(0);
    return (memory_block);
  }
  memory_block = malloc(nmemb * size);
  if (!memory_block)
    return (NULL);
  ft_bzero(memory_block, size * nmemb);
  return (memory_block);
}
