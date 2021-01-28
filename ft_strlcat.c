/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szawi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 13:32:09 by szawi             #+#    #+#             */
/*   Updated: 2021/01/21 19:13:10 by szawi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	j;
	size_t	dstlen;

	dstlen = ft_strlen(dst);
	if (dstsize <= dstlen)
		return (dstsize + ft_strlen(src));
	j = 0;
	while (((dstlen + j) < (dstsize - 1)) && src[j])
	{
		dst[dstlen + j] = src[j];
		j++;
	}
	dst[dstlen + j] = '\0';
	return (dstlen + ft_strlen(src));
}
