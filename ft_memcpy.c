/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam <marvin@42.fr> >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:46:00 by lud-adam          #+#    #+#             */
/*   Updated: 2024/11/08 13:57:12 by lud-adam         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *p_dest;
    unsigned char *p_src;
    
    p_dest = (unsigned char *)dest;
    p_src = (unsigned char *)src;
    while (n > 0)
    {
        *p_dest++ = *p_src++;
        n--;
    }
    return (p_dest);
}