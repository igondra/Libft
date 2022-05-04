/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igondra- <igondra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 13:08:28 by igondra-          #+#    #+#             */
/*   Updated: 2022/05/03 13:08:28 by igondra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset (void *str, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
    	((char *)str)[i] = c;
    	i++;
	}
	return (str);
}

/* int	main (void)
{
	char string[] = "Hola";
	char string_ft[] = "Hola";
	
	printf("Funcion ft_memset\n");
	printf("Test con: %s", string);
	memset(string, 'c', 3);
	ft_memset(string_ft, 'c', 3);
	printf("	Resultado funcion original: %s  Resultado funcion ft: %s\n", string, string_ft);

	char string1[] = "Hola mundo";
	char string1_ft[] = "Hola mundo";

	printf("Test con: %s", string1);
	memset(string1, '+', 4);
	ft_memset(string1_ft, '+', 4);
	printf("	Resultado funcion original: %s  Resultado funcion ft: %s\n", string1, string1_ft);

	char string2[] = "Hola mundo";
	char string2_ft[] = "Hola mundo";

	printf("Test con: %s", string2);
	memset(string2, '-', 10);
	ft_memset(string2_ft, '-', 10);
	printf("	Resultado funcion original: %s  Resultado funcion ft: %s\n", string2, string2_ft);
} */
