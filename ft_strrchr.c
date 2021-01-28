/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szawi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 17:41:39 by szawi             #+#    #+#             */
/*   Updated: 2021/01/28 18:03:33 by szawi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		last;

	i = 0;
	last = -1;
	if (!s)
		return (NULL);
	while (s[i])
	{
		if (s[i] == (char)c)
			last = i;
		i++;
	}
	if (s[i] == (char)c)
		return ((char*)&s[i]);
	else if (last < 0)
		return (NULL);
	else
		return ((char*)&s[last]);
}
