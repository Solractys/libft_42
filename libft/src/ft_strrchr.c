/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*  ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 14:04:00 by csilva-s          #+#    #+#             */
/*   Updated: 2025/07/17 14:04:00 by csilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c);

char *ft_strrchr(const char *s, int c)
{
	char	*cpy_c;
	size_t	len_s;
	char	*result;
	short	count;

	cpy_c = (char *)s;
	result = "";
	count = 0;
	len_s = ft_strlen(s);
	while (cpy_c[len_s] != '\0')
	{
		if(cpy_c[len_s] == c)
		{
			while (cpy_c[len_s != '\0'])
				result[count++] = cpy_c[len_s++];
			result[count] = '\0';
			return (result);
		}
		len_s--;
	}
	return (NULL);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char *str = "Hello, World!";
// 	char *result = ft_strrchr(str, 'o');
// 	if (result != NULL)
// 		printf("%s", result);
// 	else
// 		printf("Character not found\n");
// 	return (0);
// }
