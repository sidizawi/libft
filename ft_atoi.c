/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szawi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 17:03:13 by szawi             #+#    #+#             */
/*   Updated: 2021/01/26 18:39:01 by szawi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		fill_nb(int nb, const char *str, int sign)
{
	int	i;

	i = 0;
	while (str[i] >= 48 && str[i] <= 57)
	{
		if (i < 19)
			nb = nb * 10 + (str[i] - 48);
		else if (sign < 0)
			nb = 0;
		else
			nb = -1;
		i++;
	}
	if (i < 11)
		nb *= (nb > 0 ? sign : 1);
	else
		nb *= sign;
	return (nb);
}

int		ft_atoi(const char *str)
{
	int i;
	int nb;
	int sign;

	i = 0;
	sign = 1;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		sign = (str[i] == '-' ? -1 : 1);
		i++;
	}
	nb = 0;
	if (str[i] >= '0' && str[i] <= '9')
		nb = fill_nb(nb, &str[i], sign);
	return (nb);
}
