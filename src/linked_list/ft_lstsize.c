/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szawi <szawi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 18:02:02 by szawi             #+#    #+#             */
/*   Updated: 2021/06/10 19:50:26 by szawi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

int	t_lstsize(t_list *lst)
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
