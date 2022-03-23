/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   duplicate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 01:01:47 by bkeskint          #+#    #+#             */
/*   Updated: 2022/03/21 18:50:33 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell2.h"

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
	duplicate = (char **)ft_calloc((arraylenght(source) + 1), sizeof(char *));
	while (source[i])
	{
		duplicate[i] = ft_strdup(source[i]);
		i++;
	}
	duplicate[i] = NULL;
	return (duplicate);
}
