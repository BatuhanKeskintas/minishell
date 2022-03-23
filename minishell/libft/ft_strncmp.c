/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkeskint <bkeskint@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 15:26:16 by bkeskint          #+#    #+#             */
/*   Updated: 2021/05/27 11:15:18 by bkeskint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	while ((*p1 != '\0' && *p2 != '\0') && *p1 == *p2 && n != 0)
	{
		p1++;
		p2++;
		n--;
	}
	if (*p1 == *p2 || n == 0)
		return (0);
	else
		return (*p1 - *p2);
}
