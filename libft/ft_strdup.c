/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 11:19:00 by csilva-s          #+#    #+#             */
/*   Updated: 2025/07/28 14:28:43 by csilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1);

char	*ft_strdup(const char *s1)
{
	size_t	size;
	char	*s2;

	if (!s1)
		return (NULL);
	size = ft_strlen(s1) + 1;
	s2 = malloc(sizeof(char) * size);
	if (s2)
	{
		ft_strlcpy(s2, s1, size);
		return ((char *)s2);
	}
	return (NULL);
}
