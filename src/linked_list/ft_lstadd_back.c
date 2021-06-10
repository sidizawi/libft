/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szawi <szawi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 18:28:25 by szawi             #+#    #+#             */
/*   Updated: 2021/06/10 19:47:17 by szawi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*curr;

	if (alst && new)
	{
		curr = (*alst);
		if (curr)
		{
			while (curr->next)
				curr = curr->next;
			curr->next = new;
		}
		else
			ft_lstadd_front(alst, new);
	}
}
