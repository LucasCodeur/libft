/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eveil <eveil@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 20:42:43 by eveil             #+#    #+#             */
/*   Updated: 2024/11/10 14:06:14 by eveil            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{

    unsigned char *temp;

    temp = malloc(n);
    if (!temp)
        return (temp);
    ft_memcpy(temp, src, n);
    ft_memcpy(dest, temp, n);
    free(temp);
    return (dest);
}
