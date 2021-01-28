/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szawi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 19:48:47 by szawi             #+#    #+#             */
/*   Updated: 2021/01/28 18:00:09 by szawi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		len;
	int		i;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	if ((str = malloc(sizeof(char) * len)))
	{
		i = 0;
		while (*s1)
		{
			str[i] = *s1;
			s1++;
			i++;
		}
		while (*s2)
		{
			str[i] = *s2;
			s2++;
			i++;
		}
		str[i] = '\0';
	}
	return (str);
}
