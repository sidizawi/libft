/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szawi <szawi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 01:10:21 by szawi             #+#    #+#             */
/*   Updated: 2021/02/02 20:01:23 by szawi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*tab;
	size_t	i;
	size_t	len;

	if (count == 0 || size == 0)
		len = 1;
	else
		len = size * count;
	if (!(tab = malloc(len)))
		return (NULL);
	i = 0;
	while (len--)
		tab[i++] = 0;
	return (tab);
}
