/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*  ft_memset.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 02:21:00 by csilva-s          #+#    #+#             */
/*   Updated: 2025/07/14 00:21:00 by csilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int n, size_t size);

void	*ft_memset(void *s, int n, size_t size)
{
	unsigned char	value;
	unsigned char	*ptr;

	value = (unsigned char)n;
	ptr = (unsigned char *)s;
	while (size--)
		*ptr++ = value;
	return (s);
}
