/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkeskint <bkeskint@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 11:52:10 by bkeskint          #+#    #+#             */
/*   Updated: 2021/05/26 15:24:45 by bkeskint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*map;

	i = 0;
	map = ft_strdup(s);
	if (map != 0)
	{
		while (map[i])
		{
			map[i] = (*f)(i, map[i]);
			i++;
		}
	}
	else
		return (NULL);
	return (map);
}
