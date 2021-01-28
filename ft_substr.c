/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szawi <szawi@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 11:45:31 by szawi             #+#    #+#             */
/*   Updated: 2021/01/28 17:26:57 by szawi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (!s)
		return (NULL);
	else if ((sub = malloc(sizeof(char) * len + 1)))
	{
		i = 0;
		if (start < ft_strlen(s))
		{
			while (i < len && s[start + i])
			{
				sub[i] = s[start + i];
				i++;
			}
		}
		sub[i] = '\0';
	}
	return (sub);
}
