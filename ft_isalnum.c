/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalphanum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igondra- <igondra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 12:24:32 by igondra-          #+#    #+#             */
/*   Updated: 2022/05/03 12:24:32 by igondra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum (int c)
{
	if ((c < 'a' || c > 'z') && (c < 'A' || c > 'Z') && (c < '0' || c > '9'))
		return (0);
	return (1);
}

/* int	main (void)
{
	int c;
	
	c = 'c';
	printf("Funcion ft_isalnum\n");
	if (ft_isalnum(c) == isalnum(c))
		printf("Test con %c: OK		Resultado funcion original: %d  Resultado funcion ft: %d\n", c, isalnum(c), ft_isalnum(c));
	else
		printf("Test con %c: NOK		Resultado funcion original: %d  Resultado funcion ft: %d\n", c, isalnum(c), ft_isalnum(c));
	c = 'M';
	if (ft_isalnum(c) == isalnum(c))
		printf("Test con %c: OK		Resultado funcion original: %d  Resultado funcion ft: %d\n", c, isalnum(c), ft_isalnum(c));
	else
		printf("Test con %c: NOK		Resultado funcion original: %d  Resultado funcion ft: %d\n", c, isalnum(c), ft_isalnum(c));
	c = '8';
	if (ft_isalnum(c) == isalnum(c))
		printf("Test con %c: OK		Resultado funcion original: %d  Resultado funcion ft: %d\n", c, isalnum(c), ft_isalnum(c));
	else
		printf("Test con %c: NOK		Resultado funcion original: %d  Resultado funcion ft: %d\n", c, isalnum(c), ft_isalnum(c));
	c = '0';
	if (ft_isalnum(c) == isalnum(c))
		printf("Test con %c: OK		Resultado funcion original: %d  Resultado funcion ft: %d\n", c, isalnum(c), ft_isalnum(c));
	else
		printf("Test con %c: NOK		Resultado funcion original: %d  Resultado funcion ft: %d\n", c, isalnum(c), ft_isalnum(c));
	c = '+';
	if (ft_isalnum(c) == isalnum(c))
		printf("Test con %c: OK		Resultado funcion original: %d  Resultado funcion ft: %d\n", c, isalnum(c), ft_isalnum(c));
	else
		printf("Test con %c: NOK		Resultado funcion original: %d  Resultado funcion ft: %d\n", c, isalnum(c), ft_isalnum(c));	
} */
