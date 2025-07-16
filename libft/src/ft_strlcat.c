/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*  nome_do_arquivo.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 0000/00/00 00:00:00 by csilva-s          #+#    #+#             */
/*   Updated: 0000/00/00 00:00:00 by csilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size);

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;
	size_t	j;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	i = dst_len;
	j = 0;
	if (dst_len >= size)
		return (src_len + size);
	while (i < size - 1 && j < src_len)
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (src_len + dst_len);
}
