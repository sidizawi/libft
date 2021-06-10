/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szawi <szawi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 14:09:37 by szawi             #+#    #+#             */
/*   Updated: 2021/06/10 20:04:05 by szawi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

static int	ft_get_len(const char *s, char c)
{
	static int	len;

	if (len == 0)
	{
		len = 0;
		while (*s)
		{
			while (*s && *s == c)
				s++;
			while (*s && *s != c)
				s++;
			len++;
		}
		if (len > 0 && s-- && *s == c)
			len--;
	}
	return (len);
}

static int	ft_sub_len(const char *s, char c)
{
	int	len;

	len = 0;
	while (*s && *s != c && ++len)
		s++;
	return (len);
}

static void	*ft_free_tab(char **tab)
{
	int	j;

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

	if (!s)
		return (NULL);
	i = ft_get_len(s, c);
	tab = malloc(sizeof(char *) * (i + 1));
	if (!tab)
		return (NULL);
	i = -1;
	while (++i < ft_get_len(s, c))
	{
		while (*s && *s == c)
			s++;
		tab[i] = malloc(sizeof(char) * ft_sub_len(s, c) + 1);
		if (!tab[i])
			return (ft_free_tab(tab));
		j = 0;
		while (*s && *s != c)
			tab[i][j++] = *s++;
		tab[i][j] = 0;
	}
	tab[i] = NULL;
	return (tab);
}
