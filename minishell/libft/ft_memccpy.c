/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkeskint <bkeskint@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 21:29:19 by bkeskint          #+#    #+#             */
/*   Updated: 2021/05/16 23:52:26 by bkeskint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)src)[i] == (unsigned char)c)
		{
			((char *)dest)[i] = ((char *)src)[i];
			return ((void *)(dest + i + 1));
		}
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (NULL);
}
