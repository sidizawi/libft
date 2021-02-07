/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szawi <szawi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 20:12:03 by szawi             #+#    #+#             */
/*   Updated: 2021/02/07 15:33:04 by szawi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

int		in_set(char c, const char *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

int		next_in_set(const char *s1, const char *set)
{
	while (*s1)
	{
		if (!in_set(*s1, set))
			return (0);
		s1++;
	}
	return (1);
}

int		getlength(const char *s1, const char *set)
{
	int	len;

	while (in_set(*s1, set))
		s1++;
	len = 0;
	while (!next_in_set(s1++, set))
		len++;
	return (len);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*str;
	int		len;
	int		i;

	if (!s1 || !set)
		return (NULL);
	len = getlength(s1, set) + 1;
	if (!(str = malloc(sizeof(char) * len)))
		return (NULL);
	while (in_set(*s1, set))
		s1++;
	i = 0;
	while (!next_in_set(s1, set))
		str[i++] = *s1++;
	str[i] = '\0';
	return (str);
}
