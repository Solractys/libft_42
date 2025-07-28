/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*  ft_atoi.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 11:21:00 by csilva-s          #+#    #+#             */
/*   Updated: 2025/07/23 11:21:00 by csilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr);
int	ft_isspace(int c);

int	ft_isspace(int c)
{
	if (c == 32 || c == 11 || c == 9
		|| c == 10 || c == 12 || c == 13)
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	signal;
	int	result;

	i = 0;
	signal = 1;
	result = 0;
	while (ft_isspace(nptr[i]))
		i++;
	if (nptr[i] == '+' && nptr[i + 1] != '-')
		i++;
	if (nptr[i] == '-')
	{
		i++;
		signal *= -1;
	}
	while (nptr[i] && ft_isdigit (nptr[i]))
	{
		result *= 10;
		result += nptr[i] - '0';
		i++;
	}
	return (result * signal);
}

// #include "stdio.h"
// int	main (void)
// {
// 	printf("%d", ft_atoi("--123"));
// 	return (0);
// }
