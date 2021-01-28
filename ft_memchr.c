/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szawi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 16:22:42 by szawi             #+#    #+#             */
/*   Updated: 2021/01/27 20:55:24 by szawi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	chara;

	i = 0;
	chara = c;
	while (i < n)
	{
		if ((unsigned char)s == chara)
			return ((void*)s);
		s++;
	}
	return (NULL);
}
