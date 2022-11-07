/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 19:26:46 by jole              #+#    #+#             */
/*   Updated: 2022/11/03 15:16:32 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long long	nb;
	int			is_negative;

	nb = 0;
	is_negative = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			is_negative = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		if (nb < 0)
		{
			if (is_negative == 1)
				return (-1);
			return (0);
		}
		nb = nb * 10 + (*str++ - 48);
	}
	return (nb * is_negative);
}
