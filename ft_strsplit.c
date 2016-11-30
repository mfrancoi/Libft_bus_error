/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strplit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 20:36:00 by mfrancoi          #+#    #+#             */
/*   Updated: 2016/11/23 15:56:44 by mfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static void		remplir(char *dest, char const *src, char c)
{
	static int	i;
	int			y;

	y = 0;
	while (src[i] == c)
		i++;
	while (src[i] != c && src[i])
	{
		dest[y] = src[i];
		i++;
		y++;
	}
	dest[y] = '\0';
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		n;
	char	**res;

	i = 0;
	n = 0;
	if (s == NULL)
		return (NULL);
	res = (char **)malloc(sizeof(char *) * ft_wnbr(s, c));
	if (!(char **)malloc(sizeof(char *) * ft_wnbr(s, c)))
		return (NULL);
	res[ft_wnbr(s, c)] = NULL;
	while (i < ft_wnbr(s, c))
	{
		n = ft_lnbr(s, c);
		res[i] = (char *)malloc(sizeof(*res) * n);
		if (!(char *)malloc(sizeof(*res) * n))
			return (NULL);
		remplir(res[i], s, c);
		i++;
	}
	return (res);
}
