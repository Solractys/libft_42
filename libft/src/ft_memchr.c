/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*  ft_memchr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 18:04:00 by csilva-s          #+#    #+#             */
/*   Updated: 2025/07/20 18:04:00 by csilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n);

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*cpy_s;
	unsigned char	cpy_c;
	short	i;

	i = 0;
	cpy_c = (unsigned char )c;
	cpy_s = (unsigned char *)s;
	while (cpy_s[i] && n > 0)
	{
		if(cpy_s[i] == cpy_c)
			return (&cpy_s[i]);
		n--;
		i++;
	}
	return (NULL);
}
// #include <stdio.h>
// int	main(void)
// {
// 	int	tab[7] = {-49, 49, 1 ,-1, 0, -2, 2};
// 	printf("%s", (char *)ft_memchr(tab, -1, 7));
// 	return (0);
// }
