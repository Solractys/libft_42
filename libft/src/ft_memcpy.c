/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*  ft_memcpy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 03:04:00 by csilva-s          #+#    #+#             */
/*   Updated: 2025/07/14 03:04:00 by csilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *ptr_src;
	unsigned char *ptr_dest;

	if(!dest || !src ||  n == 0)
		return (dest);

	ptr_src = (unsigned char *)src;
	ptr_dest = (unsigned char *)dest;
	while (n--)
		*ptr_dest++ = *ptr_src++;
	return (dest);
}
