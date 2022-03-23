/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   io_handler.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkeskint <bkeskint@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 12:34:39 by bkeskint          #+#    #+#             */
/*   Updated: 2022/03/09 23:26:48 by bkeskint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/minishell.h"

void	o_handler(t_parameters *params, char **args)
{
	int	i;

	i = 0;
	while (args[i])
	{
		if (handle_o(params, args, &i))
			continue ;
		else if (handle_o_join(params, args, &i))
			continue ;
		else if (handle_o2(params, args, &i))
			continue ;
		else if (handle_o2_join(params, args, &i))
			continue ;
		i++;
	}
	if (params->o_file > 0)
		command_redirection(params);
}

void	i_handler(t_parameters *params, char **args)
{
	int	i;

	i = 0;
	while (args[i])
	{
		if (handle_i(params, args, &i) && ++params->input_flag)
			continue ;
		else if (handle_i_join(params, args, &i) && ++params->input_flag)
			continue ;
		else if (handle_i2(params, args, &i) && ++params->input_flag)
			continue ;
		else if (handle_i2_join(params, args, &i) && ++params->input_flag)
			continue ;
		i++;
	}
	if (params->i_file > 0)
		access_i_file(params, args);
}
