/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 14:04:00 by csilva-s          #+#    #+#             */
/*   Updated: 2025/07/21 16:08:21 by csilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "libft.h"

 char *ft_strrchr(const char *s, int c);

 char *ft_strrchr(const char *s, int c)
 {
	short	i;
	char	cc;
	char	*result;

	i = 0;
	cc = (char )c;
	result = NULL;
	while (s[i])
	{
		if (s[i] == cc)
			result = (char *)&s[i];
		i++;
	}
	if (c == 0)
		result = (char *)&s[i];
	return (result);

 }

