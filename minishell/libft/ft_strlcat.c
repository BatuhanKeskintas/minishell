/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkeskint <bkeskint@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 12:57:59 by bkeskint          #+#    #+#             */
/*   Updated: 2021/06/10 19:35:28 by bkeskint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dest_size)
{
	size_t	i;
	size_t	mem_len;
	size_t	lenght;

	i = 0;
	lenght = ft_strlen(dest);
	if (dest_size == 0 || lenght > dest_size - 1)
		return (ft_strlen(src) + dest_size);
	mem_len = lenght;
	while ((src[i]) && ((lenght + i) < (dest_size - 1)))
	{
		dest[mem_len] = src[i];
		i++;
		mem_len++;
	}
	dest[mem_len] = '\0';
	if (lenght >= dest_size)
		return (dest_size + ft_strlen(src));
	return (lenght + ft_strlen(src));
}
