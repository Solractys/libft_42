/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*  ft_strncmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 17:57:00 by csilva-s          #+#    #+#             */
/*   Updated: 2025/07/19 17:57:00 by csilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n);

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;
	unsigned char	*target1;
	unsigned char	*target2;

	i = 0;
	target1 = (unsigned char *)s1;
	target2 = (unsigned char *)s2;
	while (target1[i] && target2[i] && n > 0)
	{
		if (target1[i] != target2[i])
			return (target1[i] - target2[i]);
		i++;
		n--;
	}
	if (n == 0)
		return (0);
	return (target1[i] - target2[i]);
}
// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d", ft_strncmp("test", "testss", 7));
// }
