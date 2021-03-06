/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipeutils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 11:19:39 by mchatzip          #+#    #+#             */
/*   Updated: 2022/03/18 19:25:29 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	handlerightredir(char *b, int i)
{
	if (b[i] == '>')
	{
		if (b[i + 1] == '|' || b[i + 1] == '<'
			|| (b[i + 1] == '>' && (b[i + 2] == '>'
					|| b[i + 2] == '<' || b[i + 2] == '|')))
		{
			printf("syntax error close to token: '>'\n");
			return (-2);
		}
		else if (b[i + 1] == '>')
			return (i + 1);
	}
	return (i);
}

int	handleleftredir(char *b, int i)
{
	if (b[i] == '<')
	{
		if (b[i + 1] == '|' || b[i + 1] == '>')
			printf("syntax error close to token: '<'\n");
		if (b[i + 1] == '|' || b[i + 1] == '>')
			return (-2);
		else if ((b[i + 1] == '<' && b[i + 2] == '<'
				&& (b[i + 3] == '<' || b[i + 3] == '>' || b[i + 3] == '|'))
			|| (b[i + 1] == '<' && b[i + 2] == '|'))
		{
			printf("syntax error close to token: '<'\n");
			return (-1);
		}
		else if (b[i + 1] == '<'
			|| (b[i + 1] == '<' && b[i + 2] == '<' && b[i + 3] != '<'))
			return (i + 1);
	}
	return (i);
}
