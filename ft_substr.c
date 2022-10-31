/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 11:07:45 by jole              #+#    #+#             */
/*   Updated: 2022/10/28 15:08:35 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_s;

	sub_s = malloc(len * sizeof(char));
	ft_strlcpy(sub_s, (s + start), (ft_strlen(s) + 1));
	return (sub_s);
}
