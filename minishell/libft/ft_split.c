/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkeskint <bkeskint@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 10:10:17 by bkeskint          #+#    #+#             */
/*   Updated: 2022/03/06 10:15:10 by bkeskint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	split_len(const char *s, char c)
{
	int	i;
	int	number;

	i = 0;
	number = 1;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			number++;
		i++;
	}
	return (number);
}

char	**ft_split(char const *s, char c)
{
	int		number;
	int		i;
	int		st;
	char	**split;

	number = 0;
	i = 0;
	st = 0;
	split = ft_calloc((split_len(s, c) + 1), sizeof(char *));
	if (!s || !split)
		return (0);
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		st = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (s[i - 1] != c)
			split[number] = ft_substr(s, st, i - st);
		number++;
	}
	return (split);
}
