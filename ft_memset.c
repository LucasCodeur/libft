/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam <marvin@42.fr> >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:12:15 by lud-adam          #+#    #+#             */
/*   Updated: 2024/11/05 15:59:00 by lud-adam         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void    *ft_memset(void *pointer, int value, size_t count)
{
    unsigned int     i;
    void    *p;

    p = &pointer;
    i = sizeof(unsigned int) / sizeof(count);
    while (i < count)
    {
        *(int *)pointer = value;
        pointer += sizeof(value);
        i += sizeof(unsigned int); 
    }
    return (p);
}