/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_management.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkeskint <bkeskint@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 17:29:19 by bkeskint          #+#    #+#             */
/*   Updated: 2022/03/09 23:48:19 by bkeskint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/minishell.h"

void	perror(const char *s)
{
	write (2, s, ft_strlen (s));
}

void	end(const char *s)
{
	perror (s);
	exit (EXIT_FAILURE);
}

void	chdir_failed(const char *s)
{
	perror ("error: cd: cannot change directory to ");
	perror (s);
	end ("\n");
}

void	execve_failed(const char *s)
{
	perror ("error: cannot execute ");
	perror (s);
	end ("\n");
}
