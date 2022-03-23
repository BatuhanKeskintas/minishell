/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_management.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkeskint <bkeskint@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 23:47:58 by bkeskint          #+#    #+#             */
/*   Updated: 2022/03/09 23:49:15 by bkeskint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/minishell.h"

void	ft_exit(char **args)
{
	char	*tmp;
	int		ret;

	if (args && args[1])
	{
		tmp = args[1];
		ret = ft_atoi(tmp);
		exit(ret);
	}
	else
		exit(EXIT_SUCCESS);
}

void	clean_exit(char **args)
{
	freesplit(args);
	exit(EXIT_FAILURE);
}
