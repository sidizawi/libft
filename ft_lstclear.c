/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szawi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 14:01:41 by szawi             #+#    #+#             */
/*   Updated: 2021/01/19 14:38:48 by szawi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *curr;
	t_list *curr2;

	curr = *lst;
	while (curr->next)
	{
		curr2 = curr;
		while (curr2->next->next)
			curr2 = curr2->next;
		(*del)(curr2->next->content);
		free(curr2->next);
		curr2->next = NULL;
		curr = *lst;
	}
	(*del)(curr->content);
	free(curr);
	*lst = NULL;
}
