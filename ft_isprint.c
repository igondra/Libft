/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igondra- <igondra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 12:41:15 by igondra-          #+#    #+#             */
/*   Updated: 2022/05/03 12:41:15 by igondra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint (int c)
{
	if (c < 32 || c >= 127)
		return (0);
	return (1);
}

/* int	main (void)
{
	int c;
	
	c = 'c';
	printf("Funcion ft_isprint\n");
	if (ft_isprint(c) == isprint(c))
		printf("Test con %c: OK		Resultado funcion original: %d  Resultado funcion ft: %d\n", c, isprint(c), ft_isprint(c));
	else
		printf("Test con %c: NOK		Resultado funcion original: %d  Resultado funcion ft: %d\n", c, isprint(c), ft_isprint(c));
	c = 'M';
	if (ft_isprint(c) == isprint(c))
		printf("Test con %c: OK		Resultado funcion original: %d  Resultado funcion ft: %d\n", c, isprint(c), ft_isprint(c));
	else
		printf("Test con %c: NOK		Resultado funcion original: %d  Resultado funcion ft: %d\n", c, isprint(c), ft_isprint(c));
	c = '8';
	if (ft_isprint(c) == isprint(c))
		printf("Test con %c: OK		Resultado funcion original: %d  Resultado funcion ft: %d\n", c, isprint(c), ft_isprint(c));
	else
		printf("Test con %c: NOK		Resultado funcion original: %d  Resultado funcion ft: %d\n", c, isprint(c), ft_isprint(c));
	c = '0';
	if (ft_isprint(c) == isprint(c))
		printf("Test con %c: OK		Resultado funcion original: %d  Resultado funcion ft: %d\n", c, isprint(c), ft_isprint(c));
	else
		printf("Test con %c: NOK		Resultado funcion original: %d  Resultado funcion ft: %d\n", c, isprint(c), ft_isprint(c));
	c = '+';
	if (ft_isprint(c) == isprint(c))
		printf("Test con %c: OK		Resultado funcion original: %d  Resultado funcion ft: %d\n", c, isprint(c), ft_isprint(c));
	else
		printf("Test con %c: NOK		Resultado funcion original: %d  Resultado funcion ft: %d\n", c, isprint(c), ft_isprint(c));	
} */
