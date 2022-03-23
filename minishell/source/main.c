/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkeskint <bkeskint@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 01:02:48 by bkeskint          #+#    #+#             */
/*   Updated: 2022/03/10 00:41:53 by bkeskint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/minishell.h"

int	main(void)
{
	extern char		**environ;
	t_parameters	params;

	params.exit = 0;
	params.env = arraydup(environ);
	while (1)
	{
		initialization(&params);
		params.line = readline("minishell:>$ ");
		if (!params.line)
			ft_exit(NULL);
		do_comments(&params);
		if (!params.line[0] || ifspace(params.line))
			continue ;
		else
			route(&params);
	}
	return (0);
}
