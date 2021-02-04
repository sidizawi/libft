/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szawi <szawi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 17:12:39 by szawi             #+#    #+#             */
/*   Updated: 2021/02/03 17:37:33 by szawi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		nbr_length(long k)
{
	int		i;

	i = 0;
	while (k)
	{
		k /= 10;
		i++;
	}
	i++;
	return (i);
}

void	rev_dest(char *dest)
{
	int		i;
	int		size;
	char	temp;

	size = ft_strlen(dest);
	i = 0;
	while (i < (size / 2))
	{
		temp = dest[i];
		dest[i] = dest[size - i - 1];
		dest[size - i - 1] = temp;
		i++;
	}
}

char	*ft_itoa(int n)
{
	char	*dest;
	int		i;
	long	k;
	int		len;

	k = n;
	k *= (n < 0 ? -1 : 1);
	len = nbr_length(k) + (n <= 0 ? 1 : 0);
	if (!(dest = malloc(sizeof(char) * len)))
		return (NULL);
	i = 0;
	if (!k)
		dest[i++] = '0';
	while (k)
	{
		dest[i++] = (k % 10) + '0';
		k /= 10;
	}
	if (n < 0)
		dest[i++] = '-';
	dest[i] = '\0';
	rev_dest(dest);
	return (dest);
}
