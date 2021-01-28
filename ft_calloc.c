/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szawi <szawi@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 01:10:21 by szawi             #+#    #+#             */
/*   Updated: 2021/01/27 17:56:16 by szawi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*tab;
	size_t	i;
	size_t	len;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	len = size * count;
	if ((tab = malloc(len)))
	{
		i = 0;
		while (len--)
			tab[i++] = 0;
	}
	return ((void *)tab);
}
