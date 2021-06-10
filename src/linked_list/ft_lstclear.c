/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szawi <szawi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 14:01:41 by szawi             #+#    #+#             */
/*   Updated: 2021/06/10 19:47:57 by szawi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*curr;

	if (lst && *lst && del)
	{
		curr = *lst;
		while (curr->next)
		{
			while (curr->next->next)
				curr = curr->next;
			del(curr->next->content);
			free(curr->next);
			curr->next = NULL;
			curr = *lst;
		}
		del(curr->content);
		free(*lst);
		*lst = NULL;
	}
}
