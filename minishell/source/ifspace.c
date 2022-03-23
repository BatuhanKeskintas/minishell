/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ifspace.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkeskint <bkeskint@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 01:02:27 by bkeskint          #+#    #+#             */
/*   Updated: 2022/02/28 21:12:14 by bkeskint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/minishell.h"

int	ifspace(char *line)
{
	int		i;
	size_t	counter;

	i = 0;
	counter = 0;
	while (line[i])
	{
		if (line[i] == ' ')
			counter++;
		i++;
	}
	if (counter == ft_strlen(line))
		return (1);
	return (0);
}
