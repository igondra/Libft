/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igondra- <igondra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 11:04:31 by igondra-          #+#    #+#             */
/*   Updated: 2022/05/19 11:04:31 by igondra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
 
t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list  *lst_result;
	t_list  *lst_new;

	if (!lst && !*del && !*f)
	{
		return (NULL);
	}
	lst_result = NULL;
	while (lst)
	{
		lst_new = ft_lstnew((*f)(lst->content));
		ft_lstadd_back(&lst_result, lst_new);
		lst = lst->next;
	}
	return (lst_result);
}
