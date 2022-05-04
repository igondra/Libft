/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igondra- <igondra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 16:20:26 by igondra-          #+#    #+#             */
/*   Updated: 2022/05/03 16:20:26 by igondra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero (void *s, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = 0;
		i++;
	}
}

/* int	main (void)
{
	char string[] = "Hola";
	char string_ft[] = "Hola";
	
	printf("Funcion ft_bzero\n");
	printf("Test con: %s", string);
//	bzero(string, 3);
	ft_bzero(string_ft, 3);
	printf("	Resultado funcion original: %s  Resultado funcion ft: %s\n", string, string_ft);

	char string1[] = "Hola mundo";
	char string1_ft[] = "Hola mundo";

	printf("Test con: %s", string1);
//	bzero(string1, 4);
	ft_bzero(string1_ft, 4);
	printf("	Resultado funcion original: %s  Resultado funcion ft: %s\n", string1, string1_ft);

	char string2[] = "Hola mundo";
	char string2_ft[] = "Hola mundo";

	printf("Test con: %s", string2);
//	bzero(string2, 10);
	ft_bzero(string2_ft, 10);
	printf("	Resultado funcion original: %s  Resultado funcion ft: %s\n", string2, string2_ft);
	return (0);
} */
