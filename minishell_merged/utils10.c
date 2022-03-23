/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils10.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 11:19:39 by mchatzip          #+#    #+#             */
/*   Updated: 2022/03/18 19:50:32 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	initparseret(char **pr, char *name)
{
	freedstring(pr);
	free(name);
}

char	*handlescharsforpipes(char *b, char *ret)
{
	if (*b == ' ')
		b = handlespacexp(b, ret);
	if (*b && *b != ' ')
	{
		ft_strncat(ret, &*b, 1);
		b++;
	}
	return (b);
}
