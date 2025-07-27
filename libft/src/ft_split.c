/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 13:17:04 by csilva-s          #+#    #+#             */
/*   Updated: 2025/07/27 15:54:52 by csilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	**ft_split(char const *s, char c);
int	word_count(char const *s, char c);

int	word_count(char const *s, char c)
{
	int	i;
	int	count;
	int	flag;

	i = 0;
	count = 0;
	flag = 1;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			flag = -1;
			i++;
		}
		else if (s[i] != c)
		{
			i++;
			if (flag > 0)
			{
				count++;
				flag = -1;
			}
		}
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int	words;
	char	**result;

	words = word_count(s, c);
	result = (char **)malloc(sizeof(char *) * words + 1);

}
