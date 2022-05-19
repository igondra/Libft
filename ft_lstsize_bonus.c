/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igondra- <igondra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 16:25:14 by igondra-          #+#    #+#             */
/*   Updated: 2022/05/18 16:25:14 by igondra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	listsize;

	listsize = 0;
	while(lst != NULL)
	{
		lst = lst->next;
		listsize++;
	}
	return (listsize);
}

/* int	main(void)
{
	t_list	*lista;
	t_list	*lista1;
	t_list	*lista2;

	lista = malloc(sizeof(*lista));
	lista1 = malloc(sizeof(*lista1));
	lista2= malloc(sizeof(*lista2));

	lista->next = lista1;
	lista1->next = lista2;
	lista2->next = NULL;

	printf("El size de la lista es de: %d\n", ft_lstsize(lista));

	free(lista);
	free(lista1);
	free(lista2);
	return (0);
} */
