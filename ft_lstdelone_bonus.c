/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igondra- <igondra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 18:14:42 by igondra-          #+#    #+#             */
/*   Updated: 2022/05/18 18:14:42 by igondra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
	{
		return ;
	}
	(*del)(lst->content);
	free(lst);
}

/* void	ft_delete(void *cont)
{
	size_t	i;

	i = 0;
	if (!cont)
	{
		return;
	}
	while (((char *)cont)[i] != '\0')
	{
		((char *)cont)[i] = 0;
		i++;
	}
} */

/* int	main(void)
{
	t_list	*lista;
	t_list	*lista1;
	t_list	*lista2;
	t_list	*last;
	char	str[] = "Soy el ultimo";
	char	str2[] = "Borra esta linea";

	lista = malloc(sizeof(*lista));
	lista1 = malloc(sizeof(*lista1));
	lista2 = malloc(sizeof(*lista2));
	last = malloc(sizeof(*last));

	lista->next = lista1;
	lista1->next = lista2;
	lista1->content = str2;
	lista2->next = NULL;
	last->content = (void *)str;
	last->next = NULL;

	// Voy a borrar el content del nodo lista1 de la lista
	printf("Antes de borrarlo, el nodo borrado de la lista contiene: %s\n", lista1->content);
	ft_lstdelone(lista1, ft_delete);
	printf("El nodo borrado de la lista contiene: %s\n", lista1->content);

	free(lista);
	free(lista1);
	free(lista2);
	free(last);
	return (0);
} */
