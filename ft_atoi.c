/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam <marvin@42.fr> >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 12:35:40 by lud-adam          #+#    #+#             */
/*   Updated: 2024/11/15 16:50:35 by lud-adam         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "test/functions_test.h"

int		ft_isspace(int c)
{
	return (c == ' ' || c == '\t' || c == '\n' ||
			c == '\v' || c == '\f' || c == '\r');
}

int		ft_is_plus_or_minus(int c)
{
	return (c == '-' || c == '+');
}

int		ft_atoi(const char *nptr)
{
	int		result;
	int		sign;
	long long int	cmp;

	result = 0;
	sign = 1;
	while (ft_isspace(*nptr) == 1) nptr++;
	if (ft_is_plus_or_minus(*nptr) == 1)
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (ft_isdigit(*nptr) == 1 && *nptr != '\0')
	{
		cmp = result * 10 + (*nptr - 48);
		if (cmp >= __LONG_MAX__)
			return (-1);
		result = result * 10 + (*nptr - 48);
		nptr++;
	}
	return (result * sign);
}