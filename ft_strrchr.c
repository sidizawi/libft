/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szawi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 17:41:39 by szawi             #+#    #+#             */
/*   Updated: 2021/01/26 16:13:18 by szawi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		last;
	char	chara;

	i = 0;
	last = -1;
	if (!s)
		return (NULL);
	chara = (char)c;
	while (s[i])
	{
		if (s[i] == chara)
			last = i;
		i++;
	}
	if (s[i] == chara)
		return ((char*)&s[i]);
	else if (last < 0)
		return (NULL);
	else
		return ((char*)&s[last]);
}
