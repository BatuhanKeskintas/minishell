/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkeskint <bkeskint@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 13:46:21 by bkeskint          #+#    #+#             */
/*   Updated: 2021/06/05 14:30:19 by bkeskint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_size(int n)
{
	int	size;

	size = 1;
	if (n < 0)
		size++;
	while (n / 10)
	{
		size++;
		n /= 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	int		size;
	char	*str;
	int		flag;

	flag = 1;
	size = get_size(n);
	str = (char *)malloc ((size + 1));
	if (n < 0)
	{
		str[0] = '-';
		flag = -1;
	}
	else if (n == 0)
		str[0] = '0';
	*(str + size) = '\0';
	while (n != 0)
	{
		size--;
		*(str + size) = flag * (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
