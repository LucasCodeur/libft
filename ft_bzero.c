/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam <marvin@42.fr> >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:46:14 by lud-adam          #+#    #+#             */
/*   Updated: 2024/11/08 11:11:13 by lud-adam         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
    unsigned    char value;
    unsigned char *p;

    value = 0;
    p = (unsigned char *)s;
    while (n >= 2)
    {
        *p++ = value;
        *p++ = value;
        n -= 2;
    }
    if (n-- == 1)
        *p++ = value; 
}
