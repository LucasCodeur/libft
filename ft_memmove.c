/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam <marvin@42.fr> >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 20:42:43 by eveil             #+#    #+#             */
/*   Updated: 2024/11/11 16:18:58 by lud-adam         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "test/functions_test.h"

// void    *ft_memmove(void *dest, const void *src, size_t n)
// {

//     unsigned char *temp;

//     temp = malloc(n);
//     if (!temp)
//         return (temp);
//     ft_memcpy(temp, src, n);
//     ft_memcpy(dest, temp, n);
//     free(temp);
//     return (dest);
// } 
void    *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *p_dest;
    unsigned char *p_src;

    p_dest = (unsigned char *)dest;
    p_src = (unsigned char *)src;
    // if (!p_dest && !p_src)
    //     return (NULL);
    if (p_dest <= p_src)
        ft_memcpy(dest, src, n);
    else 
    {
        while (n > 0)
        {
            p_dest[n - 1] = p_src[n - 1];
            n--;
        }
    }
    return (dest);
}