/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szawi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 16:27:50 by szawi             #+#    #+#             */
/*   Updated: 2021/01/26 16:14:30 by szawi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!haystack || !needle)
		return (NULL);
	else if (ft_strlen(needle) == 0)
		return ((char*)haystack);
	i = 0;
	while (i < len && haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (needle[j] && needle[j] == haystack[i + j] && i + j < len)
				j++;
			if (!needle[j])
				return ((char*)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
