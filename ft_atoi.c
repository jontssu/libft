/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 19:26:46 by jole              #+#    #+#             */
/*   Updated: 2022/10/31 20:12:11 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long long	nb;
	int	is_negative;

	nb = 0;
	is_negative = 0;
	if (*str == '-')
		is_negative = 1;
	str++;
	while (*str >= '0' && *str <= '9')
	{
		nb = nb * 10 + (*str - 48);
		str++;
	}
	if (is_negative == 1)
		nb = nb * -1;
	return (nb);
}
