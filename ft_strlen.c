/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igondra- <igondra-@student.42.fr           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 12:47:17 by igondra-          #+#    #+#             */
/*   Updated: 2022/05/03 12:47:17 by igondra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen (const char *str)
{
	size_t length;
	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

/* int	main (void)
{
	char string[] = "Hola";
	
	printf("Funcion ft_strlen\n");
	if (ft_strlen(string) == strlen(string))
		printf("Test con %s: OK		Resultado funcion original: %d  Resultado funcion ft: %d\n", string, strlen(string), ft_strlen(string));
	else
		printf("Test con %s: NOK		Resultado funcion original: %d  Resultado funcion ft: %d\n", string, strlen(string), ft_strlen(string));
	
	char string1[] = "Hola mundo";
	if (ft_strlen(string1) == strlen(string1))
		printf("Test con %s: OK		Resultado funcion original: %d  Resultado funcion ft: %d\n", string1, strlen(string1), ft_strlen(string1));
	else
		printf("Test con %s: NOK		Resultado funcion original: %d  Resultado funcion ft: %d\n", string1, strlen(string1), ft_strlen(string1));

	char string2[] = "Hola mundo	!! +42";
	if (ft_strlen(string2) == strlen(string2))
		printf("Test con %s: OK		Resultado funcion original: %d  Resultado funcion ft: %d\n", string2, strlen(string2), ft_strlen(string2));
	else
		printf("Test con %s: NOK		Resultado funcion original: %d  Resultado funcion ft: %d\n", string2, strlen(string2), ft_strlen(string2));
	
	char string3[] = " 	lol Hola mundo	!! ";
	if (ft_strlen(string3) == strlen(string3))
		printf("Test con %s: OK		Resultado funcion original: %d  Resultado funcion ft: %d\n", string3, strlen(string3), ft_strlen(string3));
	else
		printf("Test con %s: NOK		Resultado funcion original: %d  Resultado funcion ft: %d\n", string3, strlen(string3), ft_strlen(string3));
} */
