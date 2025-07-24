/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*  ft_itoa.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 18:07:07 by csilva-s          #+#    #+#             */
/*   Updated: 2025/07/24 18:07:07 by csilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../libft.h"

static int count_int(int n);

char *ft_itoa(int n)
{
    char    *str;
    int    power;
    int    i;

    str = (char *)malloc(count_int(n) * sizeof(char) + 1);
    if (n < 0)
    {
      str[0] = '-';
      n = n * (-1);
      i = 1;
    }
    else
      i = 0;
    power = 10;
    while ((n / power) >= 10)
        power *= 10;
    while (power >= 1)
    {
        str[i] = (n / power) + 48;
        i++;
        n = n % power;
        power /= 10;
    }
    str[i] = '\0';
    return (str);
}

static int    count_int(int n)
{
    int    i;

    i = 0;
    if (n < 0)
    {
        n = -n;
        i++;
    }
    while ((n / 10) != 0)
    {
        i++;
        n = n / 10;
    }
    return (i + 1);
}
// #include "stdio.h"
// int    main(void)
// {
//     printf("%s\n", ft_itoa(1000));
// }
