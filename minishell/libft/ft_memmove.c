/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkeskint <bkeskint@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 08:46:16 by bkeskint          #+#    #+#             */
/*   Updated: 2021/05/27 00:51:59 by bkeskint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	const char	*src_p;
	char		*dest_p;

	src_p = src;
	dest_p = dest;
	if (len == 0)
		return (dest);
	if (dest <= src)
		return (ft_memcpy(dest, src, len));
	src_p += len;
	dest_p += len;
	while (len--)
		*--dest_p = *--src_p;
	return (dest);
}
