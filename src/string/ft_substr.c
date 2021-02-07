/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szawi <szawi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 11:45:31 by szawi             #+#    #+#             */
/*   Updated: 2021/02/07 15:33:04 by szawi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (!s)
		return (NULL);
	else if (start >= ft_strlen(s))
		return (ft_strdup(""));
	else if (start < ft_strlen(s) && (ft_strlen(s) - start) < len)
		return (ft_strdup(&s[start]));
	else if (!(sub = malloc(len + 1)))
		return (NULL);
	i = -1;
	while (++i < len)
		sub[i] = s[start + i];
	sub[i] = '\0';
	return (sub);
}
