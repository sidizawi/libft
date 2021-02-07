/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szawi <szawi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 14:09:37 by szawi             #+#    #+#             */
/*   Updated: 2021/02/07 15:33:05 by szawi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

int		getlen(const char *s, char c)
{
	int len;

	len = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		while (*s && *s != c)
			s++;
		len++;
	}
	if (len > 0)
	{
		s--;
		if (*s == c)
			len--;
	}
	return (len);
}

int		sublen(const char *s, char c)
{
	int len;

	len = 0;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

void	*free_tab(char **tab)
{
	int j;

	j = 0;
	while (tab[j])
		free(tab[j++]);
	free(tab);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		len;

	if (!s)
		return (NULL);
	len = getlen(s, c);
	if (!(tab = malloc(sizeof(char*) * (len + 1))))
		return (NULL);
	i = 0;
	while (i < len)
	{
		while (*s && *s == c)
			s++;
		if (!(tab[i] = malloc(sizeof(char) * sublen(s, c) + 1)))
			return (free_tab(tab));
		j = 0;
		while (*s && *s != c)
			tab[i][j++] = *s++;
		tab[i][j] = 0;
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
