/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igondra- <igondra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 17:39:19 by igondra-          #+#    #+#             */
/*   Updated: 2022/05/20 11:57:37 by igondra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = ft_lstlast(*lst);
	if (!new)
	{
		return ;
	}
	if (!*lst)
	{
		*lst = new;
	}
	else
	{
		if (last == NULL)
		{
			return ;
		}
		last->next = new;
	}
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
	lista2->next = NULL;
	last->content = (void *)str;
	last->next = NULL;

	// Las listas están separadas. Primero \
	las unimos y despues chequeamos que esta OK
	ft_lstadd_back(&lista, last);
	last = ft_lstlast(lista);
	printf("El ultimo nodo de la lista unida contiene: %s\n", last->content);

	free(lista);
	free(lista1);
	free(lista2);
	free(last);
	return (0);
} */
