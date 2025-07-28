/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 17:53:09 by csilva-s          #+#    #+#             */
/*   Updated: 2025/07/28 17:48:45 by csilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size);

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*temp;
	size_t			i;
	int				bytes;

	bytes = nmemb * size;
	if (nmemb == 0 || size == 0)
	{
		temp = malloc(1);
		return (temp);
	}
	if (size && ((bytes / size) != nmemb))
		return (NULL);
	temp = malloc(nmemb * size);
	i = 0;
	if (!temp)
		return (NULL);
	while (i < nmemb * size)
		temp[i++] = 0;
	return (temp);
}
