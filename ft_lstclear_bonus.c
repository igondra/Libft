/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igondra- <igondra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 09:34:19 by igondra-          #+#    #+#             */
/*   Updated: 2022/05/20 12:00:16 by igondra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*elem;

	if (!*lst)
	{
		return ;
	}
	if (del && lst)
	{
		while (*lst)
		{
			elem = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = elem;
		}
	}
	lst = NULL;
}

/* int	main(void)
{
	t_list	*lista;
	t_list	*lista1;
	t_list	*lista2;
	t_list	*last;
	char	str[] = "Soy el ultimo";
	char	str2[] = "Borra esta linea";
	char	str3[] = "Esto tambien se borra";

	lista = malloc(sizeof(*lista));
	lista1 = malloc(sizeof(*lista1));
	lista2 = malloc(sizeof(*lista2));
	last = malloc(sizeof(*last));

	lista->next = lista1;
	lista1->next = lista2;
	lista1->content = (void *)str2;
	lista2->next = last;
	lista2->content = (void *)str3;
	last->next = NULL;
	last->content = (void *)str;

	// Voy a borrar el content de todos los nodos a partir del nodo lista1
	printf("Antes de borrarlo, lista1 contiene: %s\n", lista1->content);
	printf("Antes de borrarlo, lista2 contiene: %s\n", lista2->content);
	printf("Antes de borrarlo, last contiene: %s\n", last->content);
	ft_lstclear(&lista1, ft_delete);
	// Si se hacen printf del contenido de los nodos \
	borrados no aparecen nada porque se han hecho free

	free(lista);
	free(lista1);
	free(lista2);
	free(last);
	return (0);
} */
