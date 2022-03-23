/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkeskint <bkeskint@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 14:43:51 by bkeskint          #+#    #+#             */
/*   Updated: 2021/05/20 09:04:37 by bkeskint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	st;
	size_t	end;

	st = 0;
	end = ft_strlen(s1) - 1;
	while (s1[st] && ft_strchr(set, s1[st]) != 0)
		st++;
	while (end > st && ft_strchr(set, s1[end]) != 0)
		end--;
	trim = ft_substr(s1, st, end - st + 1);
	return (trim);
}
