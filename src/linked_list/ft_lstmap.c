/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szawi <szawi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 16:33:02 by szawi             #+#    #+#             */
/*   Updated: 2021/06/10 19:50:08 by szawi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*))
{
	t_list	*new;
	t_list	*start;

	if (!lst || !f || !del)
		return (NULL);
	new = ft_lstnew(f(lst->content));
	if (!)
		return (NULL);
	lst = lst->next;
	while (lst)
	{
		start = ft_lstnew(f(lst->content));
		if (!start)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, start);
		lst = lst->next;
	}
	return (new);
}
