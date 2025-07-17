/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*  ft_strnstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 16:33:00 by csilva-s          #+#    #+#             */
/*   Updated: 2025/07/17 16:33:00 by csilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
        size_t     i;
        size_t     j;

        i = 0;
        if (little[i] == '\0')
                return ((char *)&big[i]);
        if (len < ft_strlen(little) || (int )len <= 0)
                return (NULL);
        while (big[i] != '\0' && i < len)
        {
                j = 0;
                while (big[i] == little[j])
                {
                        i++;
                        j++;
                }
                if (j >= ft_strlen(little))
                        return ((char *)&big[i - j]);
                i++;
        }
        return (NULL);
}
// #include <stdio.h>
// int    main(void)
// {
//     char haystack[30] = "aaabcabcd";
//     char needle[10] = "abcd";

//     printf("%s\n",ft_strnstr(haystack, needle, 9));
// }
