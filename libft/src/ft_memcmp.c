/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 17:24:39 by csilva-s          #+#    #+#             */
/*   Updated: 2025/07/21 17:51:28 by csilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n);

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	unsigned char	*copy_s1;
	unsigned char	*copy_s2;

	i = 0;
	copy_s1 = (unsigned char *)s1;
	copy_s2 = (unsigned char *)s2;
	while (0 < n)
	{
		if (copy_s1[i] != copy_s2[i])
		{
			return (copy_s1[i] - copy_s2[i]);
		}
		i++;
		n--;
	}
	if (n == 0)
		return (0);
	return (copy_s1[i] - copy_s2[i]);
}
