/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 18:07:21 by jole              #+#    #+#             */
/*   Updated: 2022/10/31 15:44:58 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		flen;
	char	*p;
	char	*p2;

	i = 0;
	flen = ft_strlen(s1) + 1;    //flen = 7
	while (ft_strchr(set, *s1))
	{
		i++;					// i = 6
		s1++;
	}
	if (i == (flen - 1))
		return (p = ft_calloc(1, 1));
	p2 = (char *)s1;
	s1 = s1 - i + flen - 2;         //s1 at 'c'
	while (ft_strchr(set, *s1))
	{
		s1--;
		flen--;					//s1 at 'last G' flen = 7
	}
	p = malloc((flen - i) * sizeof(char));
	ft_memcpy(p, p2, (flen - i - 1));
	p = p + i + 1;
	*p = '\0';
	return (p - i - 1);
}
