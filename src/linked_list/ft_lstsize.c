/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szawi <szawi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 18:02:02 by szawi             #+#    #+#             */
/*   Updated: 2021/02/07 15:33:05 by szawi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

int		ft_lstsize(t_list *lst)
{
	int		len;
	t_list	*curr;

	len = 0;
	curr = lst;
	while (curr)
	{
		len++;
		curr = curr->next;
	}
	return (len);
}