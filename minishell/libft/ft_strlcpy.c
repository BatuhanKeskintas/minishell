/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkeskint <bkeskint@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 23:13:26 by bkeskint          #+#    #+#             */
/*   Updated: 2022/02/28 01:00:32 by bkeskint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dest_size)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = ft_strlen(src);
	if (src_len + 1 < dest_size)
	{
		while (i < src_len + 1)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	}
	else if (dest_size != 0)
	{
		while (i < dest_size - 1)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
		((char *)dest)[dest_size - 1] = '\0';
	}
	return (src_len);
}
