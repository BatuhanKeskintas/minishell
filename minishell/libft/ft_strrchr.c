/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkeskint <bkeskint@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 14:49:08 by bkeskint          #+#    #+#             */
/*   Updated: 2021/05/27 11:40:20 by bkeskint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*store;

	i = 0;
	store = NULL;
	while (s[i])
	{
		if (s[i] == c)
			store = (char *)(s + i);
		i++;
	}
	if (s[i] == c)
		return ((char *)(s + i));
	return (store);
}
