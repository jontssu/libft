/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:25:52 by jole              #+#    #+#             */
/*   Updated: 2022/10/31 21:14:47 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	nlen;

	nlen = ft_strlen(needle);
	while (*needle && len != 0)
	{
		while (*haystack && len > 0)
		{
			if (!ft_strncmp(haystack, needle, nlen) && nlen <= len)
				return ((char *)haystack);
			haystack++;
			len--;
		}
		return (0);
	}
	return ((char *)haystack);
}
