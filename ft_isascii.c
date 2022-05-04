/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igondra- <igondra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 12:35:59 by igondra-          #+#    #+#             */
/*   Updated: 2022/05/03 12:35:59 by igondra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii (int c)
{
	if (c < 0 || c > 127)
		return (0);
	return (1);
}

/* int	main (void)
{
	int c;
	
	c = 'c';
	printf("Funcion ft_isascii\n");
	if (ft_isascii(c) == isascii(c))
		printf("Test con %c: OK		Resultado funcion original: %d  Resultado funcion ft: %d\n", c, isascii(c), ft_isascii(c));
	else
		printf("Test con %c: NOK		Resultado funcion original: %d  Resultado funcion ft: %d\n", c, isascii(c), ft_isascii(c));
	c = 'M';
	if (ft_isascii(c) == isascii(c))
		printf("Test con %c: OK		Resultado funcion original: %d  Resultado funcion ft: %d\n", c, isascii(c), ft_isascii(c));
	else
		printf("Test con %c: NOK		Resultado funcion original: %d  Resultado funcion ft: %d\n", c, isascii(c), ft_isascii(c));
	c = '8';
	if (ft_isascii(c) == isascii(c))
		printf("Test con %c: OK		Resultado funcion original: %d  Resultado funcion ft: %d\n", c, isascii(c), ft_isascii(c));
	else
		printf("Test con %c: NOK		Resultado funcion original: %d  Resultado funcion ft: %d\n", c, isascii(c), ft_isascii(c));
	c = '0';
	if (ft_isascii(c) == isascii(c))
		printf("Test con %c: OK		Resultado funcion original: %d  Resultado funcion ft: %d\n", c, isascii(c), ft_isascii(c));
	else
		printf("Test con %c: NOK		Resultado funcion original: %d  Resultado funcion ft: %d\n", c, isascii(c), ft_isascii(c));
	c = '+';
	if (ft_isascii(c) == isascii(c))
		printf("Test con %c: OK		Resultado funcion original: %d  Resultado funcion ft: %d\n", c, isascii(c), ft_isascii(c));
	else
		printf("Test con %c: NOK		Resultado funcion original: %d  Resultado funcion ft: %d\n", c, isascii(c), ft_isascii(c));	
} */
