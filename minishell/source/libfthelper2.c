/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libfthelper2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkeskint <bkeskint@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 12:53:25 by bkeskint          #+#    #+#             */
/*   Updated: 2022/03/07 13:42:14 by bkeskint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/minishell.h"

char	**arrdup(char **src)
{
	char	**dup;
	int		i;

	i = 0;
	dup = (char **)malloc(sizeof(char *) * (arrlen(src) + 1));
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
	new = (char **)malloc(sizeof(char *) * (arrlen(arr) + 2));
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
