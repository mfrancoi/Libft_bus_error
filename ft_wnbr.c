/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wnbr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 15:40:49 by mfrancoi          #+#    #+#             */
/*   Updated: 2016/11/23 15:45:42 by mfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_wnbr(char const *s, char c)
{
	int i;
	int y;

	i = 0;
	y = 1;
	while (s[i] == c && s[i])
		i++;
	if (s[i] == '\0')
		return (0);
	while (s[i])
	{
		if (s[i] == c)
		{
			while (s[i] == c && s[i])
				i++;
			if (s[i] != '\0')
				y++;
		}
		if (s[i] != '\0')
			i++;
	}
	return (y);
}
