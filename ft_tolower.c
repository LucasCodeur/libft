/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam <marvin@42.fr> >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:28:52 by lud-adam          #+#    #+#             */
/*   Updated: 2024/11/12 19:20:40 by lud-adam         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_is_upper(int c)
{
    if (c >= 65 && c <= 90)
        return (1);
    return (0);
}

int     ft_tolower(int c)
{
    if (ft_is_upper(c) == 1)
        return (c + 32);
    return (c);
}