/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils9.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 11:19:39 by mchatzip          #+#    #+#             */
/*   Updated: 2022/02/27 12:13:35 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char	*exportout2(char *dest, char *b)
{
	if (echoerrcheck(b))
		return ("");
	while (*b == ' ')
		b++;
	while (*b)
		b = handlescharsxp(b, dest);
	return (dest);
}

void	cleanhouse(char **s, char *dest)
{
	int	i;

	i = -1;
	while (s[++i])
		free(s[i]);
	free(s);
	free(dest);
	cleartrash(g_env);
}

void	xportloop(int i, int c, char **s, char *dest)
{
	if (g_env[i])
		free(g_env[i]);
	evalquotes(exportout2(dest, s[c]));
	ft_bzero(dest, 1000);
	g_env[i] = ft_strdup(exportout2(dest, s[c]));
	if (!ft_strncmp(g_env[i], "PATH", 4))
		execunset("unset OLDPATH");
}

int	freedstring(char **s)
{
	int	i;
	int	ret;

	i = 0;
	ret = 0;
	if (s[1])
		ret = ft_atoi(s[1]);
	while (s[i])
		free(s[i++]);
	free(s);
	return (ret);
}

bool	checkifnumeric(char *s)
{
	size_t	i;
	bool	num;

	i = 0;
	num = 0;
	while (s[i])
		if (!ft_isdigit(s[i++]))
			num = 1;
	return (num);
}
