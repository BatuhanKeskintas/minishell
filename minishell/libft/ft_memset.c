/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkeskint <bkeskint@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 17:30:40 by bkeskint          #+#    #+#             */
/*   Updated: 2021/05/27 00:44:40 by bkeskint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memset(void *dest, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = dest;
	while (len--)
	{
		*ptr++ = c;
	}
	return (dest);
}
