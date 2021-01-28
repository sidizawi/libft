/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szawi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 16:02:56 by szawi             #+#    #+#             */
/*   Updated: 2021/01/28 17:40:05 by szawi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	const char		*s;
	char			*d;

	s = (const char*)src;
	d = (char*)dst;
	i = 0;
	while (i < n)
	{
		d[i] = (char)s[i];
		i++;
		if ((unsigned char)s[i - 1] == (unsigned char)c)
			return (dst + i);
	}
	return (NULL);
}
