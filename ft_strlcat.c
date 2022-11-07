/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:33:26 by jole              #+#    #+#             */
/*   Updated: 2022/11/03 14:26:36 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dlen;
	size_t	slen;

	if (!dst && dstsize == 0)
		return (0);
	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	if (*src == 0)
		return (dlen);
	if (dlen < dstsize && *src != 0)
	{
		dst = dst + dlen;
		while ((dstsize - dlen - 1) > 0 && *src != 0)
		{
			*dst = *src;
			dst++;
			src++;
			dstsize--;
		}
		*dst = '\0';
		return (slen + dlen);
	}
	return (dstsize + slen);
}
