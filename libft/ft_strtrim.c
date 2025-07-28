/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 17:55:00 by csilva-s          #+#    #+#             */
/*   Updated: 2025/07/28 19:17:57 by csilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s3;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s1 && !set)
		return (NULL);
	if (!set)
		return ((char *)s1);
	start = 0;
	end = ft_strlen(s1);
	while (ft_strchr(set, s1[start]))
		start++;
	while (ft_strchr(set, s1[end]))
		end--;
	s3 = ft_calloc(sizeof(char), (end - start) + 2);
	if (!s3)
		return (NULL);
	i = 0;
	while (start <= end)
		s3[i++] = s1[start++];
	return (s3);
}
