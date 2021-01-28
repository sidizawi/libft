/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szawi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 16:46:28 by szawi             #+#    #+#             */
/*   Updated: 2021/01/16 15:48:20 by szawi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	const char	*d1;
	const char	*d2;

	i = 0;
	d1 = (const char*)s1;
	d2 = (const char*)s2;
	while (i < n)
	{
		if ((unsigned char)d1[i] != (unsigned char)d2[i])
			return ((unsigned char)d1[i] - (unsigned char)d2[i]);
		i++;
	}
	return (0);
}
