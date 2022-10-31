/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:08:49 by jole              #+#    #+#             */
/*   Updated: 2022/10/28 17:25:18 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_s;	
	int		s1_len;
	int		s2_len;
	
	if (s1 == 0 || s2 == 0)
		return (0);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	new_s = malloc((s1_len + s2_len + 1) * sizeof(char));
	ft_memcpy(new_s, s1, s1_len);
	ft_memcpy(new_s + s1_len, s2, s2_len);
	new_s[s1_len + s2_len + 1] = '\0';
	return (new_s);
}
