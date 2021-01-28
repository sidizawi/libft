/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szawi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 16:59:41 by szawi             #+#    #+#             */
/*   Updated: 2021/01/26 16:16:41 by szawi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	chara;

	i = 0;
	if (!s)
		return (NULL);
	chara = (char)c;
	while (s[i])
	{
		if (s[i] == chara)
			return ((char*)&s[i]);
		i++;
	}
	if (s[i] == chara)
		return ((char*)&s[i]);
	return (NULL);
}
