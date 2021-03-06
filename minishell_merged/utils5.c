/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 11:19:39 by mchatzip          #+#    #+#             */
/*   Updated: 2022/01/31 14:41:05 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char	*handleschars(char	*b)
{
	if (*b == ' ')
		b = handlespace(b);
	if (*b == '\'')
		b = handlesquotes(b);
	if (*b == '"')
		b = handledquotes(b);
	if (*b == '$')
		b = printvar(b);
	if (*b != ' ' && *b != '$' && *b != '\'' && *b != '"')
	{
		printf("%c", *b);
		b++;
	}
	return (b);
}

void	execseq(char *b, char **rpaths, char **argvs, char *fpath)
{
	int		i;
	bool	c;
	char	*tmp;

	c = false;
	i = execve(&argvs[0][2], argvs, g_env);
	if (i == -1)
	{
		while (i == -1 && *rpaths)
		{
			i = execve(fpath, argvs, g_env);
			rpaths++;
			if (!*rpaths)
				c = true;
			if (i == -1 && c == true)
				perror(&b[2]);
			free(fpath);
			tmp = ft_strjoin(*rpaths, "/");
			fpath = ft_strjoin(tmp, &argvs[0][2]);
			free(tmp);
		}	
	}
}

char	*emptyname(char *s)
{
	if (s[1] == '$')
	{
		handlepiddis(s);
		s += 2;
	}
	else if (!s[1] || s[1] == ' ' || s[1] == '"' || s[1] == '\'')
	{
		printf("$");
		s += 1;
	}
	return (s);
}

char	*zeroorhash(char *s)
{
	int	status;

	wait(&status);
	if (s[1] == '0')
	{
		printf("minishell");
		s += 2;
	}
	else if (s[1] == '#')
	{
		printf("0");
		s += 2;
	}
	else if (s[1] == '?')
	{
		printf("%s", g_env[998]);
		s += 2;
	}
	return (s);
}

char	*allelse(char *b, char *s, char *name)
{
	printf("%s", b);
	s += ft_strlen(name) + 1;
	free(b);
	return (s);
}
