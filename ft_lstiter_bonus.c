/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igondra- <igondra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 10:04:57 by igondra-          #+#    #+#             */
/*   Updated: 2022/05/19 10:04:57 by igondra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
	{
		return ;
	}
	while (lst != NULL)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}

/* void	ft_function(void *str)
{
	size_t	i;

	i = 0;
	while (((char *)str)[i] != '\0')
	{
		((char *)str)[i] = '1';
	}
}

int	main(void)
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
	printf("Antes de la funcion, lista1 contiene: %s\n", lista1->content);
	printf("Antes de la funcion, lista2 contiene: %s\n", lista2->content);
	printf("Antes de la funcion, last contiene: %s\n\n", last->content);
	ft_lstiter(lista2, ft_function);
	printf("Despues de la funcion, lista1 contiene: %s\n", lista1->content);
	printf("Despues de la funcion, lista2 contiene: %s\n", lista2->content);
	printf("Despues de la funcion, last contiene: %s\n", last->content);

	free(lista);
	free(lista1);
	free(lista2);
	free(last);
	return (0);
} */
