/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 11:27:34 by mfrancoi          #+#    #+#             */
/*   Updated: 2016/11/23 14:56:12 by mfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	static size_t	i;
	size_t			j;

	j = 0;
	if (ft_strcmp(needle, "") == 0)
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < n)
	{
		while ((haystack[i] != needle[j]) && (i < n))
			i++;
		if (i == n)
			return (NULL);
		while ((haystack[i + j] == needle[j]) && (needle[j] != '\0'))
			j++;
		if ((i + j) >= n + 1)
			return (NULL);
		if (needle[j] == '\0')
			return ((char*)haystack + i);
		else
		{
			j = 0;
			i++;
		}
	}
	return (NULL);
}
