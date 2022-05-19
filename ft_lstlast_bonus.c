/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igondra- <igondra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 16:42:18 by igondra-          #+#    #+#             */
/*   Updated: 2022/05/18 16:42:18 by igondra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*end;

	if (!lst)
	{
		return (NULL);
	}
	end = lst;
	while (end->next != NULL)
	{
		end = end->next;
	}
	return (end);
}

/* int	main(void)
{
	t_list	*lista;
	t_list	*lista1;
	t_list	*lista2;
	t_list	*last;
	char	str[] = "Soy el ultimo";

	lista = malloc(sizeof(*lista));
	lista1 = malloc(sizeof(*lista1));
	lista2 = malloc(sizeof(*lista2));
	last = malloc(sizeof(*last));

	lista->next = lista1;
	lista1->next = lista2;
	lista2->content = (void *)str;
	lista2->next = NULL;

	last = ft_lstlast(lista);
	printf("El ultimo nodo de la lista contiene: %s\n", last->content);

	free(lista);
	free(lista1);
	free(lista2);
	free(last);
	return (0);
} */
