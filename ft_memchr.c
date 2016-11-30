/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 16:48:09 by mfrancoi          #+#    #+#             */
/*   Updated: 2016/11/23 13:40:02 by mfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*d;

	i = 0;
	d = (unsigned char*)s;
	while (i < n)
	{
		if (d[i] == (unsigned char)c)
			return ((unsigned char *)d + i);
		i++;
	}
	return (NULL);
}
