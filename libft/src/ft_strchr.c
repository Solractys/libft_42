/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*  ft_strchr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 13:12:00 by csilva-s          #+#    #+#             */
/*   Updated: 2025/07/17 13:12:00 by csilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c);

char	*ft_strchr(const char *s, int c)
{
	char	cc;

	cc = (char )c;
	while (*s != '\0')
	{
		if (*s == cc)
			return ((char *)s);
		s++;
	}
	if (*s == cc)
		return ((char *)s);
	return (NULL);
}
// #include <stdio.h>
// int	main(void)
// {
// 	char *str = "Hello, World!";
// 	char *result;

// 	result = ft_strchr(str, 'o');
// 	if (result != NULL)
// 		printf("%s", result );
// 	else
// 		printf("404");
// 	return (0);
// }
