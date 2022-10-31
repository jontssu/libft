/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:28:44 by jole              #+#    #+#             */
/*   Updated: 2022/10/31 15:45:50 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_calculate_digits(int n);

char	*ft_itoa(int n)
{
	char	*p;

	p = 0;
	ft_calculate_digits(n);
	return (p);
}

int	ft_calculate_digits(int n)
{
	int	digits;

	digits = 0;
	if (n < 0)
	{
		digits++;
		n = n / -10;
	}
	while (n > 0)
	{
		digits++;
		n = n / 10;
	}
	return (digits);
}
