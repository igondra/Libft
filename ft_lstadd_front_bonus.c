/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igondra- <igondra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 13:46:15 by igondra-          #+#    #+#             */
/*   Updated: 2022/05/18 13:46:15 by igondra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if(!new)
		return ;
	if(!lst)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}

/* int	main(void)
{
	t_list	*new_list;
	char	str_new[] = "Kaixo";
	t_list	*previous_list;
	char	str_previous[] = "Agur";

	previous_list = malloc(sizeof(*previous_list));
	new_list = malloc(sizeof(*new_list));
	previous_list->content = (void *)str_previous;
	new_list->content = (void *)str_new;

	// Defino dos lista independientes. Ahora voy a añadir new_list a previous_list

	ft_lstadd_front(&previous_list, new_list);
	printf("El contenido del nodo nuevo es: %s", previous_list->content);
	free(previous_list);
	free(new_list);
	// Ahora el puntero previous_list apunta al nodo new, de manera que el content será "Kaixo"
} */
