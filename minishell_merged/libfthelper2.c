/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libfthelper2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 12:53:25 by bkeskint          #+#    #+#             */
/*   Updated: 2022/03/21 18:49:20 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell2.h"

char	**arrdup(char **src)
{
	char	**dup;
	int		i;

	i = 0;
	dup = (char **)ft_calloc((arrlen(src) + 1), sizeof(char *));
	while (src[i])
	{
		dup[i] = ft_strdup(src[i]);
		i++;
	}
	dup[i] = NULL;
	return (dup);
}

char	**strarrayadd(char **arr, char *str)
{
	char	**new;
	int		i;

	i = 0;
	new = (char **)ft_calloc((arrlen(arr) + 2), sizeof(char *));
	while (arr[i])
	{
		new[i] = ft_strdup(arr[i]);
		i++;
	}
	new[i] = ft_strdup(str);
	i++;
	new[i] = NULL;
	freesplit(arr);
	return (new);
}
