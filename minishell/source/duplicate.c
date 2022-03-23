/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   duplicate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkeskint <bkeskint@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 01:01:47 by bkeskint          #+#    #+#             */
/*   Updated: 2022/02/28 01:02:07 by bkeskint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/minishell.h"

int	arraylenght(char **source)
{
	int	i;

	i = 0;
	while (source[i])
		i++;
	return (i);
}

char	**arraydup(char **source)
{
	char	**duplicate;
	int		i;

	i = 0;
	duplicate = (char **)malloc(sizeof(char *) * (arraylenght(source) + 1));
	while (source[i])
	{
		duplicate[i] = ft_strdup(source[i]);
		i++;
	}
	duplicate[i] = NULL;
	return (duplicate);
}
