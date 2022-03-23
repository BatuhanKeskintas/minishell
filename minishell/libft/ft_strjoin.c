/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkeskint <bkeskint@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 13:13:00 by bkeskint          #+#    #+#             */
/*   Updated: 2021/05/21 13:37:01 by bkeskint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;

	join = (char *)malloc ((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (join == NULL)
		return (NULL);
	else
	{
		ft_strlcpy(join, s1, ft_strlen (s1) + 1);
		ft_strlcpy(join + ft_strlen (s1), s2, ft_strlen (s2) + 1);
	}
	return (join);
}
