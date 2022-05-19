/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igondra- <igondra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 13:24:42 by igondra-          #+#    #+#             */
/*   Updated: 2022/05/18 13:24:42 by igondra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
 
t_list	*ft_lstnew(void *content)
{
	t_list  *list;

	list = malloc(sizeof(*list));
	if (!list)
		return (NULL);
	list->content = content;
	list->next = NULL;
	return (list);
}
 
/* int	main(void)
{
	char	str[] = "lorem ipsum dolor sit";

	t_list  *elem;

	elem = ft_lstnew((void *)str);
	printf("Contenido (content) del nodo creado: %s\n", elem->content);
	printf("Siguiente nodo (next) del nodo creado: %s\n", elem->next);
} */
